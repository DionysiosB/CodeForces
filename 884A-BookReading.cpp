#include <cstdio>

int main(){

    const long S = 86400;
    long n, t; scanf("%ld %ld", &n, &t);
    long day(0);
    for(long p = 1; p <= n; p++){
        long a; scanf("%ld", &a);
        long f = S - a;
        t -= f; if(t <= 0){day = p; break;}
    }

    printf("%ld\n", day);

    return 0;
}
