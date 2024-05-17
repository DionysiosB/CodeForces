#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        if(a > b){long x = a; a = b; b = x;}
        bool u = (a <= c && c <= b);
        bool v = (a <= d && d <= b);
        puts(u ^ v ? "YES" : "NO");
    }

}
