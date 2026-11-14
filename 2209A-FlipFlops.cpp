#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, c, k; scanf("%lld %lld %lld", &n, &c, &k);
        std::vector<ll> a(n);
        for(ll &x : a){scanf("%lld", &x);}
        sort(a.begin(), a.end());

        for(ll x : a){
            if(x <= c){
                ll diff = c - x;
                ll more = (diff < k ? diff : k);
                c += x + more;
                k -= more;
            }
            else{break;}
        }

        printf("%lld\n", c);
    }

}
