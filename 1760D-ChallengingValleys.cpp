#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cur; scanf("%ld", &cur);
        bool down(true),res(true); 
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            if(cur > x){if(!down){res = false;}}
            else if(cur < x){down = false;}
            cur = x;
        }

        puts(res ? "YES" : "NO");
    }

}
