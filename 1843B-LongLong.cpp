#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
         long n; scanf("%ld", &n);
         bool pos(true); long cnt(0); long long total(0);
         for(long p = 0; p < n; p++){
             long x; scanf("%ld", &x);
             if(x > 0){pos = true; total += x;}
             else if(x < 0){
                 if(pos){++cnt; pos = false;}
                 total -= x;
             }
         }

         printf("%lld %ld\n", total, cnt);
    }

}
