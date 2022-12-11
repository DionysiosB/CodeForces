#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long div(n);
        for(long p = 2; p * p <= n; p++){
            if(n % p == 0){div = p; break;}
        }

        printf("%ld %ld\n", (n / div), (div - 1) * (n / div));
    }

}
