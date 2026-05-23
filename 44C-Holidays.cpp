#include <cstdio>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    long cur(0), day(-1), times(1);
    for(long p = 0; p < m; p++){
        long a, b; scanf("%ld %ld", &a, &b);
        if(cur + 1 < a){day = cur + 1; times = 0; break;}
        else if(a < cur + 1){day = a; ++times; if(b > a){break;}}
        cur = b;
    }

    if(day < 0 && cur < n){day = cur + 1; times = 0;}

    if(day < 0){puts("OK");}
    else{printf("%ld %ld\n", day, times);}

    return 0;
}
