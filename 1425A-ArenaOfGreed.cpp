#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll res(0);
        while(n > 0){
            if(n % 4 == 2 || n == 4){res += n / 2; n /= 2;}
            else{++res; --n;}

            if(n <= 0){break;}

            if(n % 4 == 2 || n == 4){n /= 2;}
            else{--n;}
        }

        printf("%lld\n", res);
    }

    return 0;
}
