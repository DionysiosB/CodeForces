#include <cstdio>
typedef long long ll;

bool isPrime(ll x){
    if(x == 2 || x == 3 || x == 5){return true;}
    if(x % 2 == 0 || x % 3 == 0 || x % 5 == 0){return false;}
    for(ll p = 7; p * p <= x; p += 2){if(x % p == 0){return false;}}
    return true;
}

int main(){

    const ll N = 1e15;
    ll t; scanf("%lld", &t);
    while(t--){
        ll d; scanf("%lld", &d);
        ll x(1), y(1);
        for(ll p = d + 1; p <= N; p++){if(isPrime(p)){x = p; break;}}
        y = x * x;
        for(ll p = x + d; p < x * x; p++){if(isPrime(p)){y = p; break;}}
        ll res = x * y;
        printf("%lld\n", res);
    }

}
