#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long k, x; scanf("%lld %lld", &k, &x);
        while(k--){x *= 2;}
        printf("%lld\n", x);
    }

}
