#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long mn = (a < b ? a : b); mn = (mn < c ? mn : c);
        long mx = (a > b ? a : b); mx = (mx > c ? mx : c);
        printf("%ld\n", mx - mn);
    }

}
