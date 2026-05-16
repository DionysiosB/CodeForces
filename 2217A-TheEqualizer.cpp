#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long s(0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s += x;}
        puts( ((s % 2) || (n % 2 == 0) || (k % 2 == 0)) ? "YES" : "NO");
    }

}
