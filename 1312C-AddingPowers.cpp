#include <cstdio>
#include <set>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::set<ll> s;
        bool res(true);
        while(n--){
            ll x; scanf("%lld", &x);
            for(long p = 0; x && res && p < 100; p++){
                ll mod = (x % k); 
                if(mod > 1){res = false;}
                if(mod){
                    if(s.count(p)){res = false;};
                    s.insert(p);
                }
                x /= k; 
            }
        }

        puts(res ? "YES" : "NO");
    }

    return 0;
}
