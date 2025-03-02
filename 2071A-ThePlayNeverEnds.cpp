#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long k; scanf("%ld", &k);
        puts((k - 1) % 3 ? "NO" : "YES");
    }

}
