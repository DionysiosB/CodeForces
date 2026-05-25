#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r; scanf("%ld %ld", &l, &r);
        if(2 * l > r){puts("-1 -1");}
        else{printf("%ld %ld\n", l, 2 * l);}
    }

    return 0;
}
