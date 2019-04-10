#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const ll MOD = 1000000007;
    const ll N = 2007;

    std::vector<std::vector<ll> > f(N, std::vector<ll>(N, 0));
    for(int p = 0; p < N; p++){
        f[p][0] = 1;
        for(int q = 1; q <= p; q++){f[p][q] = (f[p - 1][q - 1] + f[p - 1][q]) % MOD;}
    }

    ll n, m, k; scanf("%lld %lld %lld", &n, &m, &k); 
    printf("%lld\n", f[n - 1][2 * k] * f[m - 1][2 * k] % MOD);

    return 0;
}
