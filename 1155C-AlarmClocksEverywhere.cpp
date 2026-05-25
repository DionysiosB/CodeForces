#include <cstdio>
#include <vector>
typedef long long ll;
ll gcd (ll a, ll b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    ll start; scanf("%lld", &start);
    ll g(0);
    for(ll p = 0; p < n - 1; p++){ll x; scanf("%lld", &x); g = gcd(g, x - start);}
    ll idx(-1), dur(-1);
    for(ll p = 1; p <= m; p++){ll h; scanf("%lld", &h); if(g % h == 0){idx = p; dur = h; break;}}
    if(idx > 0){puts("YES"); printf("%lld %lld\n", start, idx);}
    else{puts("NO");}

    return 0;
}
