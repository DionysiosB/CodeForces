#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
        bool ans = (n % 2 == b % 2) && (b >= a || (a % 2 == b % 2));
        puts(ans ? "YES" : "NO");
    }

}
