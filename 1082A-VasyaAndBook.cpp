#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, y, d; scanf("%ld %ld %ld %ld", &n, &x, &y, &d);
        --n; --x; --y;
        long res(-1);
        long dist = y - x; dist = (dist > 0) ? dist : -dist;
        if(dist % d == 0){res = dist / d;}
        else if(n % d == 0 && y % d == 0){
            long wa = y/d+(x+d-1)/d;
            long wb = (n - x + d - 1) / d + (n - y) / d;
            res = wa < wb ? wa : wb;
        }
        else if(y % d == 0){res = y / d + (x + d - 1) / d;}
        else if((n - y) % d == 0){res = (n - x + d - 1) / d + (n - y) / d;}

        printf("%ld\n", res);
    }

    return 0;
}
