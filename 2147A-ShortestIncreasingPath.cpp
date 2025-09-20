#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld\n", &x, &y);
        if(y == 1 || x == y || x == y + 1){puts("-1");}
        else if(x < y){puts("2");}
        else{puts("3");}
    }

}
