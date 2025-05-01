#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        bool res = ((2 * b > c) && ((2 * b - c) % a == 0)) || ((2 * b > a) && ((2 * b - a) % c == 0)) || ((a + c) % (2 * b) == 0);
        puts(res ? "YES" : "NO");
    }

}
