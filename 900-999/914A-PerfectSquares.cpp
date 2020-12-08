#include <cstdio>
#include <cmath>

int main(){

    long n; scanf("%ld", &n);
    long ans(-1e8);
    while(n--){
        long x; scanf("%ld", &x);
        if(x >= 0){
            long s = sqrt(x);
            if((s * s < x) && (x > ans)){ans = x;}
        }
        else{ans = (ans > x) ? ans : x;}
    }

    printf("%ld\n", ans);

    return 0;
}
