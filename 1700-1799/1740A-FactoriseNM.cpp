#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("%d\n", (n == 2) ? 7 : 3);
    }
}
