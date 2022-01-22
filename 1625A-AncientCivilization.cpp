#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, len; scanf("%ld %ld", &n, &len);
        std::vector<long> v(len, 0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            for(long u = 0; u < len; u++){v[u] += x % 2; x /= 2;}
        }

        long res(0);
        for(long p = len - 1; p >= 0; p--){res = 2 * res + ((2 * v[p] <= n) ? 0 : 1);}
        printf("%ld\n", res);
    }

}
