#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        bool res = true;
        if(a > 2 * b + 2 || b > 2 * a + 2){res = false;}
        c -= a; d -= b;
        if(c > 2 * d + 2 || d > 2 * c + 2){res = false;}
        puts(res ? "YES" : "NO");
    }

}
