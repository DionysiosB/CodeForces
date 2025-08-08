#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool good(true); long f(-1);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x < 0){continue;}
            if(f < 0){f = x;}
            if(!f || f != x){good = false;}
        }

        puts(good ? "YES" : "NO");
    }

}
