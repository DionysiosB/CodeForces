#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 3 == 1){printf("1"); --n;}
        while(n > 0){
            printf("2"); n -= 2;
            if(n <= 0){break;}
            printf("1"); n -= 1;
        }

        puts("");
    }

}
