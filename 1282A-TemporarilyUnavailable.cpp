#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        if(a > b){long x = a; a = b; b = x;}
        long l(c - d), r(c + d);
        long avail(0);
        if(r <= a || b <= l){avail = 0;}
        else if(l <= a && b <= r){avail = b - a;}
        else if(a <= l && r <= b){avail = r - l;}
        else{
            long m = (a > l) ? a : l;
            long M = (b < r) ? b : r;
            avail = M - m;
        }

        printf("%ld\n", (b - a) - avail);
    }

    return 0;
}
