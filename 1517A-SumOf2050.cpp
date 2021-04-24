#include <cstdio>
typedef long long ll;

int main(){

    const ll A = 2050;
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        if(n % A){puts("-1"); continue;}
        ll d = n / A; 
        ll res(0);
        while(d > 0){res += (d % 10); d /= 10;}
        printf("%lld\n", res);
    }

}
