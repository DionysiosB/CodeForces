#include <cstdio>
#include <vector>
#include <set>
typedef long long ll;

int main(){

    std::set<ll> ssq;
    for(ll p = 1; p <= 5e5; p++){ssq.insert(p * p);}

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        if(ssq.count(n * (n + 1) / 2)){puts("-1"); continue;}

        std::vector<ll> v(n, -1);
        ll cs(0);
        for(ll p = 0; p < n; p++){
            if(v[p] < 0){
                ll cur = p + 1;
                if(ssq.count(cs + cur)){v[p] = cur + 1; v[p + 1] = cur;}
                else{v[p] = cur;}
            }
            cs += v[p];
        }

        for(ll p = 0; p < n; p++){printf("%lld ", v[p]);}
        puts("");
    }

}
