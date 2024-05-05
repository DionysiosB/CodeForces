#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k1, k2; scanf("%ld %ld %ld", &n, &k1, &k2);
        long w, b; scanf("%ld %ld", &w, &b);
        bool ans = (2* w <= k1 + k2 && 2 * b <= (n - k1) + (n - k2));
        puts(ans ? "YES" : "NO");
    }

}
