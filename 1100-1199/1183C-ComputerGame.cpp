#include <cstdio>
typedef long long ll;

int main(){

    ll q; scanf("%lld", &q);
    while(q--){
        ll k, n, a, b; scanf("%lld %lld %lld %lld", &k, &n, &a, &b);
        if(k <= n * b){puts("-1"); continue;}

        ll x(0), y(n), res(n);
        while(x <= y){
            ll z = (x + y) / 2;
            if(z * a + (n - z) * b < k){res = z; x = z + 1;}
            else{y = z - 1;}
        }

        printf("%lld\n", res);
    }

    return 0;
}
