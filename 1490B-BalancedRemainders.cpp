#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long c[3] = {0};
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++c[x % 3];}
        long cnt(0), carry(0);
        for(long p = 0; p < 10; p++){
            cnt += carry;
            c[p % 3] += carry;
            carry = 0;
            if(c[p % 3] > n / 3){
                long diff = c[p % 3] - n / 3;
                carry += diff;
                c[p % 3] -= diff;
            }
        }

        printf("%ld\n", cnt);
    }

}
