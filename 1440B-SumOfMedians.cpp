#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        ll a = k * ((n - 1) / 2);
        ll b = 1 + n / 2;
        ll sm(0);
        for(ll p = 0; p < n * k; p++){
            ll x; scanf("%lld", &x);
            if(p < a){continue;}
            else if((p - a) % b == 0){sm += x;}
        }

        printf("%lld\n", sm);
    }

}
