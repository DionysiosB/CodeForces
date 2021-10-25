#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
typedef long long ll;


int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> v(n); for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}
    std::vector<ll> right(n);
    std::set<ll> ls, rs;
    std::vector<ll> rq(n, 0);

    for(ll p = n - 1; p >= 0; p--){rs.insert(v[p]); rq[p] = rs.size();}
    ll cnt(0);
    for(ll p = 0; p < n - 1; p++){
        if(ls.count(v[p])){continue;}
        ls.insert(v[p]); cnt += rq[p + 1];
    }

    printf("%lld\n", cnt);

    return 0;
}
