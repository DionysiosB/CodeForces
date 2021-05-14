#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        if(b == 1){puts("NO"); continue;}
        printf("YES\n%lld %lld %lld\n", a, a * b, a * (b + 1));
    }

}
