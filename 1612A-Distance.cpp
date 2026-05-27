#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        if((x + y) % 2){puts("-1 -1");}
        else{printf("%ld %ld\n", (x / 2), (y + 1) / 2);}
    }

}
