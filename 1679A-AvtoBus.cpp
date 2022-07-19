#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        if(n < 4 || n % 2){puts("-1"); continue;}
        n /= 2;
        printf("%lld %lld\n", ((n + 2) / 3), (n / 2));
    }

}
