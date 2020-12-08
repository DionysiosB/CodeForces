#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long res(0);
    while(n--){
        long x; scanf("%ld", &x);
        if(x > 0){res += x;} else {res -= x;}
    }

    printf("%ld\n", res);

    return 0;
}
