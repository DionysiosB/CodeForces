#include <cstdio>
#include <set>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m, d; scanf("%lld %lld %lld", &n, &m, &d);
        std::multiset<ll> w;
        ll cur(0), mx(0);
        for(ll p = 1; p <= n; p++){
            ll x; scanf("%lld", &x);
            if(x < 0){continue;}
            cur += x; w.insert(x);
            if(w.size() > m){cur -= *w.begin(); w.erase(w.begin());}
            ll score = cur - p * d;
            mx = (mx > score) ? mx : score;
        }

        printf("%lld\n", mx);

    }

}
