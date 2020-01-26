#include <cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n, x, a, b; scanf("%ld %ld %ld %ld", &n, &x, &a, &b);
        long d = b - a; if(d < 0){d = -d;}
        d += x;
        if(d > n - 1){d = n - 1;}
        printf("%ld\n", d);
    }

    return 0;
}
