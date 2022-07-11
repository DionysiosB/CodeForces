#include <cstdio>

int main(){

    long a; scanf("%ld", &a);

    while(true){
        long b(a), s(0); while(b > 0){s += b % 10; b /= 10;}
        if(s % 4 == 0){break;}
        else{++a;}
    }

    printf("%ld\n", a);

    return 0;
}
