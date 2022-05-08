#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
typedef long long ll;

int main(){

    const ll nt = 1e6;
    ll n, m; scanf("%lld %lld", &n, &m);
    std::map<ll, std::vector<ll> > w;
    for(ll row = 0; row < n; row++){
        for(ll col = 0; col < m; col++){
            ll r; scanf("%lld", &r);
            w[r].push_back(row);
            w[nt + r].push_back(col);
        }
    }


    ll res(0);
    for(std::map<ll, std::vector<ll> >::iterator it = w.begin(); it != w.end(); it++){
        std::vector<ll> v = it->second;
        sort(v.begin(), v.end());
        ll cur(0); for(ll p = 0; p < v.size(); p++){cur += (2 * p - (v.size() - 1)) * v[p];}
        res += cur;
    }

    printf("%lld\n", res);

}
