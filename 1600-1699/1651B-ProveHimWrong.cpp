#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        if(n > 19){puts("NO"); continue;}
        puts("YES"); long x(1);
        for(long p = 0; p < n; p++){printf("%ld ", x); x *= 3;}
        puts("");
    }

}
