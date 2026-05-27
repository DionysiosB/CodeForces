#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("%ld\n", (n / 2) + (n % 2)); 
        for(long p = 0; p < 3 * n / 2; p += 3){printf("%ld %ld\n", p + 1, 3 * n - p);}
    }

}
