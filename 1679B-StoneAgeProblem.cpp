#include <cstdio>
#include <vector>
#include <set>
typedef long long ll;

int main(){

    ll n, q; scanf("%lld %lld", &n, &q);
    ll sum(0), reset(-1);
    std::set<ll> s;
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]); sum += a[p]; s.insert(p);}

    for(ll p = 0; p < q; p++){
        ll t; scanf("%lld", &t);
        if(t == 1){
            ll idx, x; scanf("%lld %lld", &idx, &x);
            --idx;
            sum += (x - (s.count(idx) ? a[idx] : reset));
            a[idx] = x; s.insert(idx);
        }
        else if(t == 2){
            ll x; scanf("%lld", &x);
            reset = x; s.clear(); sum = n * x;
        }

        printf("%lld\n", sum);
    }

}
