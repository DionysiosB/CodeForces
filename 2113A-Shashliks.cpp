#include <cstdio>

int main() {

    long t; scanf("%ld", &t);
    while(t--){
        long k, a, b, x, y; scanf("%ld %ld %ld %ld %ld", &k, &a, &b, &x, &y);
        if(x > y){
            long tmp = x; x = y; y = tmp;
            tmp = a; a = b; b = tmp;
        }


        long cnt(0);
        if(k >= a){
            long div = 1 + (k - a) / x;
            cnt += div;
            k -= div * x;
        }

        if(k >= b){cnt += 1 + (k - b) / y;}

        printf("%ld\n", cnt);
    }

}
