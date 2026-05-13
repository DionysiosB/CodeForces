#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        puts( ((x & 1) && (y & 1)) ? "NO" : "YES");
    }

}
