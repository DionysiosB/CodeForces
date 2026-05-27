#include <cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s(0), mn(1e9);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            mn = (mn < x) ? mn : x;
            s += x;
        }

        long res = s - n * mn;
        printf("%ld\n", res);
    }

}
