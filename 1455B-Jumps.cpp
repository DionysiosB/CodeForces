#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        long step(1), total(0);
        while(total < x){total += step; ++step;}
        if(total != x + 1){--step;}
        printf("%ld\n", step);
    }

}
