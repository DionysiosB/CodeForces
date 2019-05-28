#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

ll gcd(ll a, ll b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    const int N = 1010;
    const ll MOD = 1000000007;

    std::vector<ll> bp(N); bp[0] = 1; for(int p = 1; p < N; p++){bp[p] = 2 * bp[p - 1]; bp[p] %= MOD;}
    ll ans(1);

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> a(m); for(ll p = 0; p < m; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());
    ll cnt(n - m); 
    std::vector<ll> gv; ll prev(0);
    for(ll p = 0; p < m; p++){
        ll diff = a[p] - prev - 1;
        if(diff > 0){gv.push_back(diff);}
        if(diff > 0 && prev > 0){ans *= bp[diff - 1]; ans %= MOD;}
        prev = a[p];
    }
    if(a.back() < n){gv.push_back(n - a.back());}

    //for(int p = 0; p < gv.size(); p++){printf("** %lld\n", gv[p]);}
    //printf("PowersOnly:%lld\n", ans);

    std::vector<ll> factors(cnt + 1);
    for(ll p = 1; p <= cnt; p++){factors[p] = p;}
    //for(ll p = 0; p < factors.size(); p++){printf("%lld => %lld\n", p, factors[p]);}; puts("==");

    for(ll p = 0; p < gv.size(); p++){
        ll div = gv[p];
        for(ll dd = 2; dd <= div; dd++){
            ll u = dd;
            for(ll q = 1; q < factors.size(); q++){
                ll gg = gcd(factors[q], u);
                factors[q] /= gg; u /= gg;
                if(u <= 1){break;}
            }
        }
        //for(ll p = 0; p < factors.size(); p++){printf("%lld => %lld\n", p, factors[p]);}; puts("==");
    }

    for(ll p = 1; p < factors.size(); p++){ans *= factors[p]; ans %= MOD;}
    printf("%lld\n", ans);

    return 0;
}
