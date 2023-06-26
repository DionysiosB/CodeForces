#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll res(0); while(n){res += n; n /= 2;}
        printf("%lld\n", res);
    }

}
