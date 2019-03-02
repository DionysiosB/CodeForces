#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const long N = 1e4 + 7;
    std::vector<ll> f(N, 0);

    long n, k; scanf("%ld %ld", &n, &k);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++f[x];}

    ll cnt(0);
    if(k == 0){for(long p = 0; p < N; p++){cnt += f[p] * (f[p] - 1) / 2;}}
    else{
        for(long a = 0; a < N; a++){
            if(f[a] == 0){continue;}
            for(long b = a + 1; b < N; b++){
                if(f[b] == 0){continue;}
                long x = a ^ b;
                int u(0); while(x > 0){u += x % 2; x /= 2;}
                if(u == k){cnt += f[a] * f[b];}
            }
        }
    }

    printf("%lld\n", cnt);


    return 0;
}
