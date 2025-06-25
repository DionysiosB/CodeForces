#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, s; scanf("%ld %ld", &n, &s);
        long left(0), right(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x < s){
                long u = s - x;
                left = (left > u ? left : u);
            }
            else{
                long u = x - s;
                right = (right > u ? right : u);
            }
        }

        long total = left + right + (left < right ? left : right);
        printf("%ld\n", total);
    }

}
