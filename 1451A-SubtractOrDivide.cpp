#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n == 1){puts("0");}
        else if(n == 2){puts("1");}
        else if(n == 3){puts("2");}
        else if(n % 2 == 0){puts("2");}
        else if(n % 2){puts("3");}
        else{puts("-1");}
    }
}
