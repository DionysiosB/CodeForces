#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool sorted(true); long minnum(1e9 + 7);
        long prev; scanf("%ld", &prev);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            if(prev <= x){
                long num = 1 + (x - prev) / 2 ;
                minnum = (num < minnum) ? num : minnum;
            }
            else{sorted = false;}
            prev = x;
        }

        printf("%ld\n", sorted ? minnum : 0);
    }

}
