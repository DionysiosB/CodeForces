#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){

        long n; scanf("%ld", &n);
        long prev; scanf("%ld", &prev);
        long left(0), right(0);
        for(long p = 2; p <= n; p++){
            long x; scanf("%ld", &x);
            if(x == prev){
                left = (left ? left : p);
                right = p;
            }
            prev = x;
        }

        if(left == right){puts("0");}
        else{printf("%ld\n", (right > left + 1) ? (right - left - 1) : 1);}
    }

}
