#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s(0), mn(1000);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            s += (x % 2);
            if(x % 2){
                long cnt(0); while(x % 2){x /= 2; ++cnt;}
                mn = (mn < cnt) ? mn : cnt;
            }
            else{
                long cnt(0); while(x % 2 == 0){x /= 2; ++cnt;}
                mn = (mn < cnt) ? mn : cnt;
            }
        }

        printf("%ld\n", s % 2 ? mn : 0);
    }


}
