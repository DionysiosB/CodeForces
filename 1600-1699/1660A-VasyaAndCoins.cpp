#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        printf("%ld\n", (a ? (a + 2 * b) : 0) + 1);
    }
}
