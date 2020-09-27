#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long last(-1); bool ans(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(p && (x >= last)){ans = true;}
            last = x;
        }

        puts(ans ? "YES" : "NO");

    }

    return 0;
}
