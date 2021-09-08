#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long res(0); while(n){res = (res > (n % 10)) ? res : (n % 10); n /= 10;}
        printf("%ld\n", res);
    }

}
