#include <cstdio>
typedef long long ll;

ll gcd(ll a, ll b){return b ? gcd(b, a % b) : a;}

ll phi(ll x){

    ll cnt(x);
    for(ll p = 2; p * p <= x; p++){
        if(x % p){continue;}
        ll mult(0);
        while(x % p == 0){x /= p; ++mult;}
        cnt -= (cnt / p);
    }

    if(x > 1){cnt -= (cnt / x);}
    return cnt;
}


int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, m; scanf("%lld %lld", &a, &m);
        ll ans = phi(m / gcd(a, m));
        printf("%lld\n", ans);
    }

}
