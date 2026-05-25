#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        for(long p = 3; p < k; p++){printf("1 "); --n;}
        if(n % 2){printf("1 %ld %ld\n", n / 2, n / 2);}
        else if(n % 4 == 0){printf("%ld %ld %ld\n", n / 4, n / 4, n / 2);}
        else{printf("2 %ld %ld\n", n / 2 - 1, n / 2 - 1);}
    }

}
