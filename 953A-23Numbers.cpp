#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    std::vector<ll> twos, threes, v;
    for(ll p = 1; p < 3e9; p *= 2){twos.push_back(p);}
    for(ll p = 1; p < 3e9; p *= 3){threes.push_back(p);}

    for(long p = 0; p < twos.size(); p++){for(long q = 0; q < threes.size(); q++){v.push_back(twos[p] * threes[q]);}}

    ll l, r; scanf("%lld %lld", &l, &r);
    ll cnt(0);
    for(long p = 0; p < v.size(); p++){cnt += (l <= v[p]) && (v[p] <= r);}
    printf("%lld\n", cnt);

    return 0;
}
