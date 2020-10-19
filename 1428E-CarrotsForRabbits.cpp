#include <cstdio>
#include <vector>
#include <set>
typedef long long ll;

ll bestTime(ll total, ll num){
    ll div = total / num;
    ll rem = total % num;
    ll nrem = num - total % num;
    ll res = nrem * div * div + rem * (div + 1) * (div + 1);
    return res;
}

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::set<std::pair<ll, ll> > s;
    std::vector<ll> len(n, 0), ps(n, 1);
    ll ans(0);
    for(long p = 0; p < n; p++){
        scanf("%lld", &len[p]);
        ans += len[p] * len[p];
        s.insert(std::make_pair(bestTime(len[p], ps[p] + 1) - bestTime(len[p], ps[p]), p));
    }

    for(long p = 0; p < k - n; p++){
        std::pair<ll, ll> elem = *s.begin();
        ll improvement = elem.first; 
        ll which = elem.second;
        ans += improvement;
        ++ps[which];
        s.erase(s.begin());
        s.insert(std::make_pair(bestTime(len[which], ps[which] + 1) - bestTime(len[which], ps[which]), which));
    }

    printf("%lld\n", ans);

    return 0;
}
