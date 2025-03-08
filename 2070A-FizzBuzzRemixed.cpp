#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a = (n / 15);
        long b = (n % 15) + 1;
        b = (b < 3 ? b : 3);
        printf("%ld\n", 3 * a + b);
    }

}
