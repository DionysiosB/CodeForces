#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        long long res(0);
        for(long p = 1; p < n; p++){
            long x = a[p] - a[p - 1]; if(x < 0){x = -x;}
            long y = b[p] - b[p - 1]; if(y < 0){y = -y;}
            long z = x + y;
            x = a[p] - b[p - 1]; if(x < 0){x = -x;}
            y = b[p] - a[p - 1]; if(y < 0){y = -y;}
            long w = x + y;
            res += (z < w) ? z : w;
        }

        printf("%lld\n", res);
    }

}
