#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long s = a + b + c;
        long u = (s % 3) ? -1 : (s / 3);
        puts( (u >= a && u >= b) ? "YES" : "NO");
    }

}
