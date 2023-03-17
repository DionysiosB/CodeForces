#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        x = (x < 0) ? -x : x;
        y = (y < 0) ? -y : y;
        if(x > y){long z = x; x = y; y = z;}
        printf("%ld\n", 2 * y - (y > x));
    }

}
