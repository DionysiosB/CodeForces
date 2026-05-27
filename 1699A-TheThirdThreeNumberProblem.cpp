#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 2){puts("-1");}
        else{printf("0 0 %ld\n", n / 2);}
    }

}
