#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        if((b > d) || ((d - b) < (c - a))){puts("-1"); continue;}
        long res = 2 * (d - b) + (a - c);
        printf("%ld\n", res);
    }

}
