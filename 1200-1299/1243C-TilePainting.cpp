#include <cstdio>
typedef long long ll;
 
int main(){
    
    ll n; scanf("%lld", &n);
    ll x(-1), y(-1);
    for(ll p = 2; p * p <= n; p++){
        if(n % p){continue;}
        if(x < 0){x = p;}
        if((p % x) != 0 || ((n / p) % x) != 0){y = p; break;}
    }
 
    ll res(n);
    if(x < 0){res = n;}
    else if(y < 0){res = x;}
    else{res = 1;}
 
    printf("%lld\n", res);
 
    return 0;
}
