#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long d(a ^ b ^ c);
        if((b <= a && a <= c) || (c <= a && a <= b)){d -= a;}
        else if((a <= b && b <= c) || (c <= b && b <= a)){d -= b;}
        else if((a <= c && c <= b) || (b <= c && c <= a)){d -= c;}
        printf("%ld\n", d);
    }
}
