#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long res(0);
        while(n > 10){res += 9; n /= 10;}
        res += n;
        printf("%ld\n", res);
    }

}
