#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool res(false);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            if(x <= p){res = true;}
        }

        puts(res ? "YES" : "NO");
    }

}
