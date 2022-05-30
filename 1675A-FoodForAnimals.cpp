#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, x, y; scanf("%ld %ld %ld %ld %ld", &a, &b, &c, &x, &y);
        x -= (a < x ? a : x);
        y -= (b < y ? b : y);
        bool res = (x + y <= c);
        puts(res ? "YES" : "NO");
    }

}
