#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s(0);
        for(long p = 0; p < n; p++){long a; scanf("%ld", &a); s += a;}
        puts(s % 4 ? "NO" : "YES");
    }

}
