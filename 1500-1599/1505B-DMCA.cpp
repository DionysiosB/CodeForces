#include <cstdio>

int main(){


    long x; scanf("%ld", &x);
    while(x > 9){
        long y(x), s(0);
        while(y > 0){s += y % 10; y /= 10;}
        x = s;
    }

    printf("%ld\n", x);

    return 0;
}
