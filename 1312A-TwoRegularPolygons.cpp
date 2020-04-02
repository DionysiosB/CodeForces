#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long m, n; scanf("%ld %ld", &m, &n);
        puts((m % n == 0) ? "YES" : "NO");
    }

    return 0;
}
