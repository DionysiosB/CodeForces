#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, b; scanf("%lld %lld", &n, &b);

    std::vector<std::pair<ll, ll> > div;
    for(ll p = 2; p * p <= b; p++){
        if(b % p){continue;}
        ll cnt = 0;
        while(b % p == 0){b /= p; ++cnt;}
        div.push_back(std::make_pair(p, cnt));
    }
    if(b > 1){div.push_back(std::make_pair(b, 1));}


    ll res(1e18);
    for(ll p = 0; p < div.size(); p++){
        ll u = n;
        ll curdiv = div[p].first;
        ll cnt(0);
        while(u >= curdiv){cnt += (u / curdiv); u /= curdiv;}
        cnt /= div[p].second;
        res = (res < cnt) ? res : cnt;
    }

    printf("%lld\n", res);

    return 0;
}
