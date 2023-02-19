#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a(0), b(0), pow(1); bool f(0);
        while(n){
            long x = n % 10; n /= 10;
            if(x % 2){f = 1 - f;}
            a += pow * ((x + f) / 2);
            b += pow * ((x + 1 - f) / 2);
            pow *= 10;
        }

        printf("%ld %ld\n", a, b);
    }

}
