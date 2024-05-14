#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> v(31);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            for(long b = 0; b < 31; b++){v[b] += (x % 2); x /= 2;}
        }

        long res(0);
        for(long b = 30; b >= 0; b--){
            if(v[b] + k >= n){
                res += (1 << b);
                k -= (n - v[b]);
            }
        }

        printf("%ld\n", res);
    }

}
