#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long x1, y1, x2, y2; scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
        puts((x1 - y1) * (x2 - y2) > 0 ? "YES" : "NO");
    }

}
