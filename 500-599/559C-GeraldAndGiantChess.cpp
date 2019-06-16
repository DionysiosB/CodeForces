#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

ll countPaths(const std::pair<ll, ll> &from, const std::pair<ll, ll> &to, const std::vector<ll> &fs, const std::vector<ll> &invfs, const ll &MOD){
    ll xf(from.first), yf(from.second), xt(to.first), yt(to.second);
    ll dx(xt - xf), dy(yt - yf);
    if(dx < 0 || dy < 0){return 0;}
    ll cnt = fs[dx + dy]; cnt %= MOD;
    cnt *= invfs[dx]; cnt %= MOD;
    cnt *= invfs[dy]; cnt %= MOD;
    cnt = (cnt + MOD) % MOD;
    return cnt;
}

int main(){

    const ll M = 1e9 + 7;
    ll h, w, n; scanf("%lld %lld %lld", &h, &w, &n);
    ll d = h + w + 3;
    std::vector<ll> fact(d, 1); for(ll p = 1; p < d; p++){fact[p] = p * fact[p - 1]; fact[p] %= M;}
    std::vector<ll> invMod(d, 1); for(ll p = 2; p < d; p++){invMod[p] = (M - (M / p) * invMod[M % p] % M); invMod[p] %= M;}
    std::vector<ll> invFact(d, 1); for(ll p = 2; p < d; p++){invFact[p] = invFact[p - 1] * invMod[p]; invFact[p] %= M;}

    std::vector<std::pair<ll, ll> > bcs(n);
    for(ll p = 0; p < n; p++){scanf("%lld %lld", &bcs[p].first, &bcs[p].second);}
    bcs.push_back(std::make_pair(h, w));
    sort(bcs.begin(), bcs.end());

    std::vector<ll> cv(n + 1, 0);
    for(ll p = 0; p <= n; p++){cv[p] = countPaths(std::make_pair(1, 1), bcs[p], fact, invFact, M);}

    for(ll p = 1; p <= n; p++){
        for(ll q = 0; q < p; q++){
            if(bcs[q].second > bcs[p].second){continue;}
            cv[p] -= (cv[q] * countPaths(bcs[q], bcs[p], fact, invFact, M)) % M;
            cv[p] = (M + cv[p]) % M;
        }
    }

    printf("%lld\n", cv[n]);

    return 0;
}
