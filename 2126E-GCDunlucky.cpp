#include <cstdio>
#include <vector>
typedef long long ll;

ll gcd(ll a, ll b){return a ? gcd(b % a, a) : b;}

int main() {

    ll t; scanf("%lld", &t);
    while(t--) {

        ll n; scanf("%lld", &n);
        std::vector<ll> v(n), w(n), a(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}
        for(ll p = 0; p < n; p++){scanf("%lld", &w[p]);}
        for(ll p = 0; p < n; p++){a[p] = v[p] * w[p] / gcd(v[p], w[p]);}

        bool possible(true);
        ll g(0);
        for(ll p = 0; possible && p < n; p++){
            g = gcd(g, a[p]);
            if(g != v[p]){possible = false;}
        }

        g = 0;
        for(ll p = n - 1; possible && p >= 0; p--){
            g = gcd(g, a[p]);
            if(g != w[p]){possible = false;}
        }

        puts(possible ? "YES" : "NO");
    }

}
