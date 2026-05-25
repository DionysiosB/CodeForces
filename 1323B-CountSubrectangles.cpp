#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, m, k; scanf("%lld %lld %lld", &n, &m, &k);
    std::vector<ll> a(n), b(m);
    for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    for(ll p = 0; p < m; p++){scanf("%lld", &b[p]);}
    for(ll p = 1; p < n; p++){if(a[p]){a[p] += a[p - 1];}}
    for(ll p = 1; p < m; p++){if(b[p]){b[p] += b[p - 1];}}
    ll cnt(0);
    for(ll p = 0; p < n; p++){
        if(k % (p + 1) > 0){continue;}
        ll u(p + 1), v(k / (p + 1));
        ll w(0), z(0);
        for(ll q = 0; q < n; q++){if(a[q] >= u){++w;}}
        for(ll q = 0; q < m; q++){if(b[q] >= v){++z;}}
        cnt += w * z;
    }

    printf("%lld\n", cnt);

    return 0;
}
