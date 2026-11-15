#include <cstdio>
#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long total(0), mn(1007);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            mn = (mn < a ? mn : a);
            total += mn;
        }

        printf("%ld\n", total);
    }

}
