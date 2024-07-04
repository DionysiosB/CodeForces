#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, f, k; scanf("%ld %ld %ld", &n, &f, &k);
        std::vector<long> v(n); --f;
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}

        long scnt(0), bcnt(0), cnt(0);
        for(long p = 0; p < n; p++){
            if(v[p] > v[f]){++bcnt;}
            else if(v[p] == v[f]){++cnt;}
            else if(v[p] < v[f]){++scnt;}
        }

        if(k <= bcnt){puts("NO");}
        else if(k >= bcnt + cnt){puts("YES");}
        else{puts("MAYBE");}
    }

}
