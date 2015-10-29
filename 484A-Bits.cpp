#include <cstdio>
#include <iostream>

int main(){

    long t; scanf("%ld\n", &t);
    while(t--){

        int64_t left, right; scanf("%lld %lld\n", &left, &right);

        int64_t add = 1;
        for(int p = 0; p < 63; p++){
            if((left | add) > right){break;}
            left |= add;
            add <<= 1;
        }

        printf("%lld\n", left);
    }

    return 0;
}
