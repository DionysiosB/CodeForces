#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        if(a == b){puts("0");}
        else if(a % b == 0 || b % a == 0){puts("1");}
        else{puts("2");}
    }

}
