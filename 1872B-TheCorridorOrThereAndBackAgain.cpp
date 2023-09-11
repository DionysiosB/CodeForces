#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long res(1e9 + 7);
        for(long p = 0; p < n; p++){
            long d, s; scanf("%ld %ld", &d, &s);
            long lim = d + (s - 1) / 2;
            res = (res < lim) ? res : lim;
        }
        
        printf("%ld\n", res);
    }

}
