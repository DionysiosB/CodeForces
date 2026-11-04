#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        if(b > a + 1){puts("-1");}
        else{printf("%ld\n", a + ((b - a)% 2 + 2) % 2);}
    }

}
