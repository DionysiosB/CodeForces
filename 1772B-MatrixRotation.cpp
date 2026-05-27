#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z, w; scanf("%ld %ld %ld %ld", &x, &y, &z, &w);
        bool ans = (x < y && x < z && y < w && z < w) || 
            (z < x && z < w && x < y && w < y) ||
            (w < z && w < y && z < x && y < x) ||
            (y < w && y < x && w < z && x < z) ;
        puts(ans ? "YES" : "NO");
    }

}
