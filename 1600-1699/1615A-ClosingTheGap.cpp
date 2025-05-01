#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s(0); for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s += x;}
        s %= n;
        puts(s ? "1" : "0");
    }

}
