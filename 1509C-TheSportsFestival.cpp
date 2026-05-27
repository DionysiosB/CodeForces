#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());

    std::vector<std::vector<ll> > f(n, std::vector<ll>(n, 0));
    for(ll d = 1; d < n; d++){
        for(ll start = 0; start + d < n; start++){
            ll finish = start + d;
            ll down = (start + 1 < n) ? (start + 1) : n;
            ll left = (finish > 0) ? (finish - 1) : 0;
            ll x = f[down][finish];
            ll y = f[start][left];
            ll z = (x < y) ? x : y;
            f[start][finish] = z + (a[finish] - a[start]);
        }
    }

    printf("%lld\n", f[0][n - 1]);

}
