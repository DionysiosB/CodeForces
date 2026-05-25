#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r; scanf("%ld %ld", &l, &r);
        puts(r + 1 <= 2 * l ? "YES" : "NO");
    }

    return 0;
}
