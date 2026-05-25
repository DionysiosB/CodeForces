#include <cstdio>
#include <vector>
#include <set>
typedef long long ll;

int main(){

    const ll N = 200007;
    std::vector<bool> bv(N, 1); bv[0] = bv[1] = 0;
    std::vector<ll> v;
    for(ll p = 2; p < N; p++){
        if(!bv[p]){continue;}
        v.push_back(p);
        for(ll q = 2 * p; q < N; q += p){bv[q] = 0;}
    }

    std::vector<std::multiset<ll, std::greater<ll> > > cv(v.size());
    std::vector<ll> ccv(v.size(), 0);

    ll n; scanf("%lld", &n);
    for(ll p = 0; p < n; p++){
        ll x; scanf("%lld", &x);
        for(ll q = 0; q < v.size() && x >= v[q]; q++){
            if(ccv[q] <= p - 2){continue;}
            ll cnt(0); while(x > 1 && x % v[q] == 0){++cnt; x /= v[q];}
            cv[q].insert(cnt); ++ccv[q];
            if(cv[q].size() > 2){cv[q].erase(cv[q].begin());}
        }
    }

    ll g(1);
    for(ll p = 0; p < n; p++){
        if(cv[p].empty() || ccv[p] < n - 1){continue;}
        ll mult = *cv[p].begin();
        while(mult--){g *= v[p];}
    }

    printf("%lld\n", g);
}
