#include <cstdio>
#include <algorithm>
#include <vector>
typedef long long ll;

bool cmp(std::pair<ll, ll> a, std::pair<ll, ll> b){
    if(a.first != b.first){return a.first < b.first;}
    return a.second > b.second;
}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<std::pair<ll, ll> > v(n);
        for(ll p = 0; p < n; p++){scanf("%lld %lld", &v[p].first, &v[p].second);}
        sort(v.begin(), v.end(), cmp);

        ll idx(0), cnt(0), total(0);
        for(ll p = 0; p < n; p++){
            if(p < idx){continue;}
            total += v[p].second;
            ++cnt;
            while(idx < n && v[idx].first <= cnt){++idx;}
            cnt = p - idx + 1; cnt = (cnt > 0 ? cnt : 0);
        }

        printf("%lld\n", total);
    }

}
