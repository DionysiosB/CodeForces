#include <cstdio>
#include <vector>

long gcd(long a, long b){return b ? gcd(b, a % b) : a;}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long res(0);
        for(long p = 0; p < n - p; p++){
            long diff = a[p] - a[n - 1 - p];
            if(diff < 0){diff = -diff;}
            res = gcd(diff, res);
        }

        printf("%ld\n", res);
    }

}
