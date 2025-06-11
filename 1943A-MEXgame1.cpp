#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> f(n + 1, 0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++f[x];}

        long single(0), ans(0);
        for(long p = 0; p <= n; p++){
            if(!f[p]){ans = p; break;}
            single += (f[p] == 1);
            if(single == 2){ans = p; break;}
        }

        printf("%ld\n", ans);
    }

}
