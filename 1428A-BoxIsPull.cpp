#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x1, y1, x2, y2; scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
        long xd = x2 - x1; xd = (xd > 0) ? xd : -xd;
        long yd = y2 - y1; yd = (yd > 0) ? yd : -yd;
        long ans = xd + yd + 2 * (xd > 0 && yd > 0);
        printf("%ld\n", ans);
    }

    return 0;
}
