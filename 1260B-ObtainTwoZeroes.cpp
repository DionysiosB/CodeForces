#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        bool ans = ((a + b) % 3) || (a > 2 * b) || (b > 2 * a);
        puts(ans ? "NO" : "YES");
    }

    return 0;
}
