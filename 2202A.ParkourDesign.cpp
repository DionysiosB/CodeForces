#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        x -= 2 * y * (y > 0) - 4 * y * (y < 0);
        puts( (x < 0) || (x % 3) ? "NO" : "YES");
    }

}
