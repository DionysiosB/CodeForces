#include<cstdio>
#include <vector>
typedef long long ll;

int main(){

    const int N = 14;
    std::vector<ll> a(N, 0);
    for(ll p = 0; p < N; p++){scanf("%lld", &a[p]);}

    ll mx(0);
    for(ll p = 0; p < N; p++){
        if(a[p] == 0){continue;}
        std::vector<ll> b = a;
        ll d = b[p]; ll f = d / N; d %= N; b[p] = 0;
        ll w(0);
        for(ll q = 1; q <= N; q++){
            ll g = (p + q) % N;
            b[g] += (f + (d > 0)); --d;
            if(b[g] % 2 == 0){w += b[g];}
        }

        mx = (mx > w) ? mx : w;
    }

    printf("%lld\n", mx);

    return 0;
}
