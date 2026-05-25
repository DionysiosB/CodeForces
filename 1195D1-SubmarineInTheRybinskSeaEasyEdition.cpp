#include<cstdio>
#include<vector>
typedef long long ll;

int main(){

    const ll MOD = 998244353;
    const int N = 10;
    ll n; scanf("%lld", &n);
    std::vector<ll> s(N, 0), t(N, 0);
    for(ll p = 0; p < n; p++){
        ll x; scanf("%lld", &x);
        ll idx(0);
        while(x > 0){s[idx] += x % 10; ++idx; x /= 10;}
        ++t[idx - 1];
    }

    ll ma(1), res(0);
    for(long p = 0; p < N; p++){
        ll mb(1), rem(n);
        for(long q = 0; q < p; q++){
            res += 2 * (mb % MOD) * (t[q] % MOD) * (s[p] % MOD);
            res %= MOD;
            mb *= 100; mb %= MOD;
            rem -= t[q];
        }

        res += (s[p] % MOD) * ((((ma % MOD) * (rem % MOD) % MOD) + 10 * ((ma % MOD) * (rem % MOD) % MOD)) % MOD);
        res %= MOD;
        ma *= 100; ma %= MOD;
    }

    printf("%lld\n", res % MOD);

    return 0;
}
