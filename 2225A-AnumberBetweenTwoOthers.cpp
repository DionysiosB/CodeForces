#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long x, y; scanf("%lld %lld", &x, &y);
        puts(y > 2 * x ? "YES" : "NO");
    }

}
