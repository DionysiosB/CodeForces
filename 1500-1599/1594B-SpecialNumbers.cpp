#include <cstdio>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;
    long t; scanf("%ld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        ll res(0), cur(1);
        while(k){
            if(k % 2){res += cur; res %= MOD;}
            cur *= n; cur %= MOD;
            k /= 2;
        }

        printf("%lld\n", res);
    }

}
