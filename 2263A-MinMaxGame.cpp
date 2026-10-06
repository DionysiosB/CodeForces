#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a(0);
        for(long p = 0; p < n; p++){int x; scanf("%d", &x); a += x;}
        puts(2 * a >= n ? "Bessie" : "Elsie");
    }

}
