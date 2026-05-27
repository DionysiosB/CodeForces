#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        printf("%ld\n", (m * n + 2) / 3);
    }

}
