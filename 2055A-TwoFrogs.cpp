#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
        puts((a - b) % 2 ? "NO" : "YES");
    }

}
