#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x(0), g(0);
        for(long p = 0; p < n; p++){
            long l, r; scanf("%ld %ld", &l, &r);
            if(g < l){g = l + 1; x = l;}
            else if(g <= r){x = g++;}
            else{x = 0;}
            printf("%ld ", x);
        }
        puts("");
    }

    return 0;
}
