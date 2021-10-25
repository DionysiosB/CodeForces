#include <cstdio>
#include <vector>

int main() {

    long n; scanf("%ld", &n);
    std::vector<long> l(n), r(n), a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &l[p]);}
    for(long p = 0; p < n; p++){scanf("%ld", &r[p]);}
    for(long p = 0; p < n; p++){a[p] = n - l[p] - r[p];}
    for(long p = 0; p < n; p++){for(long q = 0; q < p; q++){l[p] -= (a[q] > a[p]);}}
    for(long p = 0; p < n; p++){for(long q = p + 1; q < n; q++){r[p] -= (a[q] > a[p]);}}

    bool possible(true);
    for(long p = 0; p < n; p++){if(l[p] != 0 || r[p] != 0){possible = false; break;}}
    if(possible){
        puts("YES");
        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
        puts("");
    }
    else{puts("NO");}

    return 0;
}
