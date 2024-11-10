#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r, k; scanf("%ld %ld %ld", &l, &r, &k);
        long res = (r / k) - l + 1;
        printf("%ld\n", res > 0 ? res : 0);
    }

}
