#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a(0), b(0);
        bool res(true);
        long n; scanf("%ld", &n);
        for(long p = 0; p < n; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            if(x < a){res = false;}
            if(y < b){res = false;}
            if(x - a <  y - b){res = false;}
            a = x; b = y;
        }

        puts(res ? "YES" : "NO");
    }

    return 0;
}
