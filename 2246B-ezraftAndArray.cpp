#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        if(n == 1){puts("1"); continue;}
        else if(n == 2){puts("-1"); continue;}
        else{
            printf("1 2 3 ");
            ll s(6);
            for(ll p = 3; p < n; p++){printf("%lld ", s); s *= 2;}
            puts("");
        }
    }

}
