#include <cstdio>

int main(){

    const int B = 7;
    long t; scanf("%ld", &t);
    while(t--){
        long mx(-100);
        long s(0);
        for(long p = 0; p < B; p++){
            long x; scanf("%ld", &x);
            s -= x;
            mx = (mx > x ? mx : x);
        }

        printf("%ld\n", s + 2 * mx);
    }

}
