#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        puts( (y == x + 1) || ( (x > y) && !((x - y + 1) % 9) ) ? "Yes" : "No");
    }

}
