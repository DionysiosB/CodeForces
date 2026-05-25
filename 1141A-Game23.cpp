#include <cstdio>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    if(m % n > 0){puts("-1"); return 0;}
    ll d = m / n; 
    ll cnt(0);
    while(d % 2 == 0){d /= 2; ++cnt;}
    while(d % 3 == 0){d /= 3; ++cnt;}
    printf("%lld\n", d == 1 ? cnt : -1);

    return 0;
}
