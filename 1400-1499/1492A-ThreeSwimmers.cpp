#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll m, a, b, c; scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        ll ta = (a - (m % a)) % a;
        ll tb = (b - (m % b)) % b;
        ll tc = (c - (m % c)) % c;
        ll res = (ta < tb) ? ta : tb;
        res = (res < tc) ? res : tc;
        printf("%lld\n", res);
    }


}
