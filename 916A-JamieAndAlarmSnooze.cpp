#include <cstdio>

int main(){

    long x, h, m; scanf("%ld %ld %ld", &x, &h, &m);
    long num(0);
    for(num = 0; num < 24 * 60; num++){
        if(h % 10 == 7 || m % 10 == 7){break;}
        else{
            m -= x;
            if(m < 0){m += 60; --h;}
            if(h < 0){h += 24;}
        }
    }

    printf("%ld\n", num);

    return 0;
}
