#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long mod = (a % b);
        long ans = (mod > 0) ? (b - mod) : 0;
        printf("%ld\n", ans);
    }

    return 0;
}
