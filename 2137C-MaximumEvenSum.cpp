#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        ll ans(-1);
        if(a % 2 && b % 2){ans = a * b + 1;}
        else if(a % 2 && (b / 2) % 2 == 0){ans = 2 + a * b / 2;}
        else if(a % 2 == 0 && b % 2 == 0){ans = 2 + a * b / 2;}
        printf("%lld\n", ans);
    }

}
