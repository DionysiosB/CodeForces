#include <cstdio>
#include <vector>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);
        long mn(1e7);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            mn = (mn < a[p]) ? mn : a[p];
        }

        long g(0);
        for(long p = 0; p < n; p++){g = gcd(g, a[p] - mn);}
        printf("%ld\n", g ? g : -1L);
    }
}
