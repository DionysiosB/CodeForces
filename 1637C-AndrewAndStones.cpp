#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool ones(true), threeodd(false); ll cnt(0);
        for(long p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            if(p == 0 || p == n - 1){continue;}
            if(n == 3 && p == 1){threeodd = x % 2;}
            if(x > 1){ones = false;}
            cnt += (x + 1) / 2;
        }

        bool impossible = ones || threeodd;
        printf("%lld\n", impossible ? (-1) : cnt);
    }

}
