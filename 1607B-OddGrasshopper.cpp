#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll x, n; scanf("%lld %lld", &x, &n);
        ll res(x), s(x % 2 ? 1 : -1);
        if(n % 4 == 1){res += s * n;}
        else if(n % 4 == 2){res -= s;}
        else if(n % 4 == 3){res -= s * (n + 1);}

        printf("%lld\n", res);
    }

}
