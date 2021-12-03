#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long res = (a < b ? a : b);
        res = (res < (a + b) / 4) ? res : (a + b)/4;
        printf("%ld\n", res);
    }

}
