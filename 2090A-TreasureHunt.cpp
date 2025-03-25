#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, a; scanf("%ld %ld %ld", &x, &y, &a);
        a %= (x + y);
        puts(a < x ? "NO" : "YES");
    }

}
