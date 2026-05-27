#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        puts(((x + z - 2 * y) % 3 == 0) ? "0" : "1");
    }

}
