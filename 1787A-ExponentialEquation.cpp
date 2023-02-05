#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 2){puts("-1");}
        else{printf("%ld 1\n", n / 2);}
    }
}
