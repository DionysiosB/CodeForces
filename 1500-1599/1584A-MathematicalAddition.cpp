#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll u, v; scanf("%lld %lld", &u, &v);
        printf("%lld %lld\n", u * u, - v * v);
    }

}
