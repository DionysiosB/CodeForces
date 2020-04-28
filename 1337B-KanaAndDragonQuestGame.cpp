#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, n, m; scanf("%ld %ld %ld", &x, &n, &m);
        while(n > 0 && x > 20){x = (x / 2) + 10; --n;}
        while(m > 0 && x > 0){x -= 10; --m;}
        puts(x <= 0 ? "YES" : "NO");
    }

    return 0;
}
