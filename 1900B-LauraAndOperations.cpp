#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        a %= 2; b %= 2; c %= 2;
        if(a == b && b == c){puts("1 1 1");}
        else if(a == b){puts("0 0 1");}
        else if(a == c){puts("0 1 0");}
        else if(b == c){puts("1 0 0");}
        else{puts("0 0 0");}
    }

}
