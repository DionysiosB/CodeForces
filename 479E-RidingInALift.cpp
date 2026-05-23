#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const ll M=1000000007;

    ll n, a, b, k; scanf("%lld %lld %lld %lld", &n, &a, &b, &k);
    if(a > b){a = n - a + 1; b = n - b + 1;}

    std::vector<ll> f(b), g(b);
    f[a]=1;

    for(int step = 0; step < k; step++){
        for(int p = 1; p < b; p++){g[p] = (M - f[p]) % M;} 
        for(int p = 1; p < b; p++){f[p] += f[p-1]; f[p] %= M;}
        for(int p = 1; p < b; p++){g[p] += f[(p + b - 1) / 2]; g[p] %= M;}
        std::vector<ll> temp = f; f = g; g = f;
    }

    ll total(0);
    for(int p = 1; p < b; p++){total += f[p]; total %= M;}
    printf("%lld\n",total);

    return 0;
}
