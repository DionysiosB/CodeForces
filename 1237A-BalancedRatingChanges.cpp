#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long diff(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        if(x % 2 && diff >= 0){--x; --diff;}
        else if(x % 2 && diff < 0){++x; ++diff;}
        printf("%ld\n", x / 2);
    }

    return 0;
}
