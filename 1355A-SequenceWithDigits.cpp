#include <cstdio>
typedef long long ll;

int getProduct(ll x){
    int mn(10), mx(0);
    while(x > 0){
        int cur = (x % 10);
        mn = (mn < cur) ? mn : cur;
        mx = (mx > cur) ? mx : cur;
        x /= 10;
    }

    return mn * mx;
}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        for(ll p = 1; p < k; p++){
            int term = getProduct(n);
            if(term == 0){break;}
            n += term;
        }

        printf("%lld\n", n);
    }

    return 0;
}
