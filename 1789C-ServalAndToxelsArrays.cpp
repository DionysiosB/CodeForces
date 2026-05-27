#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

int main() {

    ll t; scanf("%lld", &t);
    while(t--) {
        ll n, m; scanf("%lld %lld", &n, &m);
        std::vector<ll> v(n);
        std::map<ll, ll> start, cntmap;
        for (int p = 0; p < n; p++){scanf("%lld", &v[p]); start[p] = 0;}
        for (int p = 1; p <= m; p++) {
            ll pos, num; scanf("%lld %lld", &pos, &num);
            --pos;
            cntmap[v[pos]] += p - start[pos];
            start[pos] = p;
            v[pos] = num;
        }
        for (int p = 0; p < n; p++){cntmap[v[p]] += m + 1 - start[p];}

        ll total(0);
        for(std::pair<ll, ll> x : cntmap){total += x.second * (x.second - 1) / 2;}
        printf("%lld\n", m * (m + 1) * n - total);
    }

}
