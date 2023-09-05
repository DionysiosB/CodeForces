#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::map<ll, ll> cnt;
        for(ll p = 0; p < n; p++){
            ll a; scanf("%lld", &a); 
            if(a % k == 0){continue;}
            ++cnt[k - a % k];
        }
        ll mx(0);
        for(std::map<ll, ll>::iterator it = cnt.begin(); it != cnt.end(); it++){
            ll cur = (it->first) + k * ((it->second) - 1);
            mx = (mx > cur) ? mx : cur;
        }

        printf("%lld\n", mx + (mx > 0));
    }

    return 0;
}
