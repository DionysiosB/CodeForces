#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, b, x, y; scanf("%lld %lld %lld %lld", &n, &b, &x, &y);
        ll cur(0), res(0);
        for(ll p = 0; p < n; p++){
            if(cur + x <= b){cur += x;}
            else{cur -= y;}
            res += cur;
        }

        printf("%lld\n", res);
    }

}
