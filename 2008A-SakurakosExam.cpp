#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        puts( ((a % 2) || (b % 2 && a < 2)) ? "NO" : "YES");
    }

}
