#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<std::pair<ll, ll> > v(n);
    for(ll p = 0; p < n; p++){
        ll a, b; scanf("%lld %lld", &a, &b);
        if(a > b){ll tmp = a; a = b; b = tmp;}
        v[p] = std::make_pair(a, b);
    }

    sort(v.begin(), v.end());
    std::vector<ll> a(n);
    std::multiset<ll> m;
    for(ll p = 0; p < n; p++){m.insert(v[p].second);}

    ll maxVol(0), lengthMax(0), widthMax(0);
    for(ll p = 0; p < n; p++){
        ll length = v[p].first;
        ll cnt(0);
        for(std::multiset<ll>::iterator it = m.begin(); it != m.end(); it++){
            ll width = *it;
            ll vol = length * width * (m.size() - cnt);
            ++cnt;
            if(vol > maxVol){
                //printf("%lld %lld %lld %lld\n", length, width, (m.size() - cnt), vol);
                maxVol = vol;
                lengthMax = length;
                widthMax = width;
            }
        }

        m.erase(m.find(v[p].second));
    }

    printf("%lld\n%lld %lld\n", maxVol, lengthMax, widthMax);

    return 0;
}
