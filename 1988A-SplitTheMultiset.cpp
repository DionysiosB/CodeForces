#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long res = ( (n - 1) + ((k - 1) - 1) ) / (k - 1);
        printf("%ld\n", res);
    }

}
