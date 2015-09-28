#include <cstdio>

int main(){

    long n, s; scanf("%ld %ld\n", &n, &s);

    long output = -1;

    for(long p = 0; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        if(100 * x + y <= 100 * s){
            if(output < 0){output = (100 - y) % 100;}
            else if(output < (100 - y) % 100){output = 100 - y;}
        }
    }

    printf("%ld\n", output);

    return 0;
}
