#include <cstdio>
typedef long long ll;

int main(){
    ll n, k, s; scanf("%lld %lld %lld", &n, &k, &s);

    if((s < k) || ((n - 1) * k < s)){puts("NO"); return 0;}

    puts("YES");

    ll step = 1;
    while(k--){
        ll rm = (s - k < n - 1) ? (s - k) : (n - 1);
        s -= rm;
        if(step + rm <= n){step += rm;}
        else{step -= rm;}
        printf("%lld ", step);

    }
    puts("");

    return 0;
}
