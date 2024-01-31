#include <cstdio>
typedef long long ll;

int main(){
    
    ll t; scanf("%lld", &t);
    while(t--){
        ll n, c, a, b; scanf("%lld %lld %lld %lld", &n, &c, &a, &b);
        ll prev(0), used(0);
        for(ll p = 0; p < n; p++){
            ll m; scanf("%lld", &m);
            ll dur = m - prev; prev = m;
            used += ( ((a * dur) < b) ? (a * dur) : b);
        }

        puts(used < c ? "YES" : "NO");
    }

}
