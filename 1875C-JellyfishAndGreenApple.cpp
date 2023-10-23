#include <cstdio>
typedef long long ll;

ll gcd(ll a, ll b) {return b ? gcd(b, a % b) : a;}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        n %= m;
        ll g = gcd(n, m); n /= g; m /= g;
        if(m & (m - 1)){puts("-1"); continue;}
        ll res(0);
        while(n % m){
            if(n > m){n %= m;}
            res += n; n *= 2;
        }
        printf("%lld\n", g * res);
    }

}
