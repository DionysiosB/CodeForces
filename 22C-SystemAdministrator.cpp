#include <cstdio>
typedef long long ll;

int main(){

    ll n, m, v; scanf("%lld %lld %lld", &n, &m, &v);
    if(m < n - 1 || m > n * (n - 1) / 2){puts("-1"); return 0;}
    if(m > 1 + (n - 1) * (n - 2) / 2){puts("-1"); return 0;}

    ll w = (v == 1) ? 2 : 1;
    for(ll p = 1; p <= n; p++){
        if(v == p){continue;}
        printf("%lld %lld\n", v, p);
    }

    m -= (n - 1);
    for(ll p = 1; p <= n; p++){
        if(m <= 0){break;}
        if(p == v || p == w){continue;}
        for(ll q = p + 1; q <= n; q++){
            if(q == v || q == w){continue;}
            printf("%lld %lld\n", p , q);
            --m; if(m <= 0){break;}
        }
    }

    return 0;
}
