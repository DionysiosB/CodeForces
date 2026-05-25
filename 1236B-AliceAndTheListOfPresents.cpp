#include <cstdio>
typedef long long ll;

ll moduloPower(ll base, ll power, ll modulo){
    if(power < 0){return 0;}
    if(power == 0){return 1;}
    ll output(1);
    while(power > 0){
        if(power % 2){output = output * base % modulo;}
        power /= 2;
        base = base * base % modulo;
    }

    return output;
}

int main(){

    const ll MOD = 1e9 + 7;

    ll n, m; scanf("%lld %lld", &n, &m);
    ll w = moduloPower(2, m, MOD) - 1;
    ll z = moduloPower(w, n, MOD);
    printf("%lld\n", z);

    return 0;
}
