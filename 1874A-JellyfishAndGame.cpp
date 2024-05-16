#include <cstdio>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        long amn(1e9 + 7), amx(0), bmn(1e9 + 7), bmx(0);
        long long sa(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            sa += x;
            amn = std::min(amn, x);
            amx = std::max(amx, x);
        }

        for(long p = 0; p < m; p++){
            long x; scanf("%ld", &x);
            bmn = std::min(bmn, x);
            bmx = std::max(bmx, x);
        }

        if(bmx > amn){sa += (bmx - amn);}
        if(k % 2 == 0){sa += (std::min(bmn, amn) - std::max(bmx, amx));}
        printf("%lld\n", sa);
    }

}
