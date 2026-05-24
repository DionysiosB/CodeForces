#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long a(0);
    while(n--){long x; scanf("%ld", &x); a += x;}
    long m; scanf("%ld", &m);
    long t(-1);
    while(m--){
        long l, r; scanf("%ld %ld", &l, &r);
        if(a <= r){t = (a >= l) ? a : l; break;}
    }

    printf("%ld\n", t);

    return 0;
}
