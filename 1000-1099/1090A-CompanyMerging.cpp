#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<std::pair<ll, ll> > v(n);
    ll mmx(0);
    for(ll p = 0; p < n; p++){
        ll m; scanf("%lld", &m); v[p].first = m;
        ll mx(0);
        for(ll u = 0; u < m; u++){ll x; scanf("%lld", &x); mx = (mx > x) ? mx : x;}
        v[p].second = mx;
        mmx = (mmx > mx) ? mmx : mx;
    }

    ll sum(0);
    for(ll p = 0; p < n; p++){sum += (mmx - v[p].second) * v[p].first;}
    printf("%lld\n", sum);

    return 0;
}
