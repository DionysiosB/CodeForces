#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        printf("%ld\n", ((b + 1) / 2 - (a / 2)) / 2);
    }
}
