#include <cstdio>
#include <vector>
#include <set>
typedef long long ll;

int main(){

    ll n, cur; scanf("%lld %lld", &n, &cur);
    std::vector<ll> w(n); for(ll p = 0; p < n; p++){scanf("%lld", &w[p]);}
    ll a; scanf("%lld", &a);
    std::vector<ll> d(n); for(ll p = 0; p < n; p++){scanf("%lld", &d[p]);}

    ll cost(0); bool possible(true);
    std::multiset<ll> s;
    for(ll p = 0; p < n; p++){
        s.insert(d[p]);
        while((!s.empty()) && (cur < w[p])){cur += a; cost += *(s.begin()); s.erase(s.begin());}
        if(cur < w[p]){possible = false; break;}
    }

    printf("%lld\n", possible ? cost : -1);

    return 0;
}
