#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a(0), b(0), s(0);
        scanf("%ld", &a);
        for(long p = 2; p < n; p++){long x; scanf("%ld", &x); s += x;}
        scanf("%ld", &b);
        if(a + b + s == n){puts("-1");}
        else if(s == n - 2){printf("%ld\n", a + b - 1);}
        else{printf("%ld\n", s + a + b - 1);}
    }

}
