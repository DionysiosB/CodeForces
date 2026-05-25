#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll a; scanf("%lld", &a);
        ll res(1); while(a > 0){if(a & 1){res *= 2;}; a /= 2;}
        printf("%lld\n", res);
    }

    return 0;
}
