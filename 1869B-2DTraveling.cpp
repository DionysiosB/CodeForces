#include <cstdio>
#include <vector>
typedef long long ll;

ll dist(const std::pair<ll, ll> &r, const std::pair<ll, ll> &s){
    ll dx = r.first - s.first; if(dx < 0){dx = -dx;}
    ll dy = r.second - s.second; if(dy < 0){dy = -dy;}
    return dx + dy;
}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k, a, b; scanf("%lld %lld %lld %lld", &n, &k, &a, &b);
        std::vector<std::pair<ll, ll> > v(n);
        for(ll p = 0; p < n; p++){scanf("%lld %lld", &v[p].first, &v[p].second);}
        --a; --b;
        ll res = dist(v[a], v[b]);

        ll minstart(2e15 + 7), mindest(2e15 + 7), minfly(2e15 + 7);
        for(ll p = 0; p < k; p++){
            minstart = (minstart < dist(v[a], v[p])) ? minstart : dist(v[a], v[p]);
            mindest  = (mindest  < dist(v[b], v[p])) ? mindest  : dist(v[b], v[p]);
            minfly = minstart + mindest;
        }

        res = (res < minfly) ? res : minfly;
        printf("%lld\n", res);
    }

}
