#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 2 == 0){printf("2 %ld 1\n", n - 3);}
        else if(n % 4 == 1){printf("%ld %ld 1\n", n/2 - 1, n/2 + 1);}
        else if(n % 4 == 3){printf("%ld %ld 1\n", n/2 - 2, n/2 + 2);}
    }

}
