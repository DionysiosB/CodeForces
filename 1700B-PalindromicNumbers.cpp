#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        int len; ll n; scanf("%d %lld", &len, &n);
        ll res(0), tmp(n);
        while(tmp){res = 10 * res + (tmp % 10); tmp /= 10;}
        while(len--){res *= 10;}
        printf("%lld\n", res);
    }

}
