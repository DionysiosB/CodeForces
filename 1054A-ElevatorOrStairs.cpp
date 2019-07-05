#include <cstdio>

int main(){

    long x, y, z, t1, t2, t3; scanf("%ld %ld %ld %ld %ld %ld", &x, &y, &z, &t1, &t2, &t3);
    long a = (x - y) * t1; if(a < 0){a = -a;}
    long b = (z - x) * t2; if(b < 0){b = -b;}
    long c = (x - y) * t2; if(c < 0){c = -c;}
    long d = b + c + 3 * t3;
    puts((d <= a) ? "YES" : "NO");

    return 0;
}
