#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, n; scanf("%ld %ld %ld", &a, &b, &n);
        long ans(a ^ b);
        if(n % 3 == 0){ans = a;}
        else if(n % 3 == 1){ans = b;}
        printf("%ld\n", ans);
    }

    return 0;
}
