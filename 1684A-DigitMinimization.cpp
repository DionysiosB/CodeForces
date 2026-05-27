#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n < 10){printf("%ld\n", n);}
        else if(n < 100){printf("%ld\n", n % 10);}
        else{
            int res(10);
            while(n){int d = n % 10; res = (res < d ? res : d); n /= 10;}
            printf("%d\n", res);
        }
    }

}
