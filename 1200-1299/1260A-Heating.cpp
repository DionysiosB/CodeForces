#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    while(n--){
        long cnt, s; scanf("%ld %ld", &cnt, &s);
        long d = (s / cnt);
        long m = (s % cnt);
        long ans = (cnt - m) * d * d + m * (d + 1) * (d + 1);
        printf("%ld\n", ans);
    }

    return 0;
}
