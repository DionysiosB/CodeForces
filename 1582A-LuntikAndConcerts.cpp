#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long fa, fb, fc; scanf("%ld %ld %ld", &fa, &fb, &fc);
        printf("%ld\n", (fa + fc) % 2);
    }

}
