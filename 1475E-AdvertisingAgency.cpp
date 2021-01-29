#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

//Inverse modulo invmod inversemodulo invmodulo choose 
ll fastexp(ll base, ll x, ll mod){
    base %= mod;
    ll res(1);
    while(x){
        if(x % 2){res *= base; res %= mod; --x;}
        else{base = base * base; base %= mod; x /= 2;}
    }
    return res;
}

ll moduloChoose(ll a, ll b, ll mod, const std::vector<ll> &fact, const std::vector<ll> &invFact){
    if(a < b){return 0;}
    else if(a == b){return 1;}
    return (fact[a] % mod * (((invFact[b] % mod) * (invFact[a - b] % mod)) % mod)) % mod;
}

int main(){

    const ll MOD = 1e9 + 7;
    const ll N = 1017;
    std::vector<ll> fact(N, 1), invFact(N, 1);
    for(long p = 1; p < N; p++){fact[p] = fact[p - 1] * p; fact[p] %= MOD;}
    for(long p = 1; p < N; p++){invFact[p] = fastexp(fact[p], MOD - 2, MOD);}

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        a.push_back(1e6); a.push_back(-1);
        sort(a.rbegin(), a.rend());
        ll left(k); while(a[left] == a[k]){--left;}
        ll right(k); while(a[right] == a[k]){++right;}
        ll ans = moduloChoose(right - left - 1, k - left, MOD, fact, invFact);
        printf("%lld\n", ans);
    }

}
