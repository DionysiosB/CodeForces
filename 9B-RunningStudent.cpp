#include <cstdio>
#include <vector>
#include <cmath>
typedef long long ll;

int main(){

    ll n, vb, vs; scanf("%lld %lld %lld", &n, &vb, &vs);
    std::vector<ll> x(n);
    for(ll p = 0; p < n; p++){scanf("%lld", &x[p]);}
    ll xu, yu; scanf("%lld %lld", &xu, &yu);

    double mt(2e18); ll index(0);
    for(ll p = 1; p < n; p++){
        double time = sqrt((x[p] - xu) * (x[p] - xu) + yu * yu) / vs + 1.0 * x[p] / vb;
        if(time <= mt){mt = time; index = p;}
    }

    printf("%lld\n", index + 1);

    return 0;
}
