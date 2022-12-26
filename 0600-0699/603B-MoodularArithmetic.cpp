#include <cstdio>
typedef long long ll;

ll modExp(ll b, ll x, ll M){

    if(x == 0){return 1;}
    ll u = modExp(b, x / 2, M);
    ll ret = ((u * u) % M) * (((x % 2) ? b : 1) % M);
    return ret % M;
}

int main(){

    const ll MOD = 1e9 + 7;
    ll p, k; scanf("%lld %lld", &p, &k);
    ll res(0);
    if(k <= 0){res = modExp(p, p - 1, MOD);}
    else if(k <= 1){res = modExp(p, p, MOD);}
    else{
        ll m(1), cur(k);
        while(cur != 1){cur *= k; cur %= p; ++m;}
        res = modExp(p, (p - 1) / m, MOD);
    }

    printf("%lld\n", res);

    return 0;
}
