#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        long x = (a < c ? a : c);
        long y = (b < d ? b : d);
        puts(x >= y ? "Gellyfish" : "Flower");
    }

}
