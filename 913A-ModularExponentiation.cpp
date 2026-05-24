#include <cstdio>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    ll x(m), bnpwr(1);
    for(ll p = 0; p < n && x > 0; p++){x /= 2; bnpwr *= 2;}
    if(x == 0){printf("%lld\n", m);}
    else{printf("%lld\n", m % bnpwr);}

    return 0;
}
