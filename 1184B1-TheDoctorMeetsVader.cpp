#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll s, b; scanf("%lld %lld", &s, &b);
    std::vector<std::pair<ll, ll> > a(s); for(ll p = 0; p < s; p++){scanf("%lld", &a[p].first); a[p].second = p;}
    std::vector<std::pair<ll, ll> > d(b); for(ll p = 0; p < b; p++){scanf("%lld %lld", &d[p].first, &d[p].second);}
    sort(a.begin(), a.end());
    sort(d.begin(), d.end());

    std::vector<ll> sg(b, 0);
    sg[0] = d[0].second; for(ll p = 1; p < b; p++){sg[p] = sg[p - 1] + d[p].second;}

    std::vector<ll> res(s, 0);
    ll ind(0);
    for(ll p = 0; p < s; p++){
        while((ind < b) && (a[p].first >= d[ind].first)){++ind;}
        ll gold = (ind > 0) ? sg[ind - 1] : 0;
        res[a[p].second] = gold;
    }

    for(ll p = 0; p < s; p++){printf("%lld ", res[p]);}
    puts("");

    return 0;
}
