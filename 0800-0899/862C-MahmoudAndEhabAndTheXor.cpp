#include <cstdio>

int main(){

    long n, x; scanf("%ld %ld", &n, &x);
    if(n == 1){puts("YES"); printf("%ld",x);}
    else if(n == 2){
        if(x > 0){puts("YES"); printf("0 %ld\n", x);}
        else{puts("NO");}
    }
    else{
        puts("YES");
        long u(1L << 18), v(1L << 19);
        for(long p = 0; p < n - 3; p++){printf("%ld ", p); x ^= p;}
        printf("%ld %ld %ld", u ^ x, v, u ^ v);
    }


    return 0;
}
