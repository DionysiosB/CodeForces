#include <cstdio>
#include <vector>
#include <algorithm>

struct elem{long r,x,c;};
bool compA(elem a, elem b){return a.r < b.r;}
bool compB(elem a, elem b){return a.x < b.x;}

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<elem> a(n);
    for(long p = 0; p < n; p++){
        a[p].r = p;
        scanf("%ld", &a[p].x);
        a[p].c = -1;
    }

    sort(a.begin(), a.end(), compB);
    long col(0), cnt(0); bool all(false), possible(true);
    for(long p = 0; p < n; p++){
        if(p > 0 && a[p - 1].x != a[p].x){
            if(cnt > k){possible = false; break;}
            cnt = 0;
        }
        ++cnt;

        a[p].c = col + 1;
        col++; if(col >= k){all = true; col = 0;}
    }

    if(!all || cnt > k){possible = false;}

    sort(a.begin(), a.end(), compA);
    if(possible){
        puts("YES");
        for(long p = 0; p < n; p++){printf("%ld ", a[p].c);}
        puts("");
    }
    else{puts("NO");}

    return 0;
}
