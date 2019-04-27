#include <cstdio>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    ll total(0);
    while(n--){
        ll t, T, x, c; scanf("%lld %lld %lld %lld", &t, &T, &x, &c);
        ll cost = c + m * x * (t + m > T);
        if(t < T){ll cand = c * ((m - 1) / (T - t) + 1); cost = (cost < cand) ? cost : cand;}
        total += cost;
    }

    printf("%lld\n", total);

    return 0;
}
