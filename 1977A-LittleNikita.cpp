#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        puts((n >= m) && (n % 2 == m % 2) ? "Yes" : "No");
    }

}
