#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s(0); while(n){s += n % 10; n /= 10;}
        printf("%ld\n", s);
    }

}
