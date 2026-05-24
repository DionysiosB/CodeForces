#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long prev(0), res(0);
        for(long p = 0; p < k; p++){
            long x; scanf("%ld", &x);
            if(p == 0){res = x;}
            else{
                long cand = 1 + (x - prev) / 2;
                res = (res > cand) ? res : cand;
            }

            if(p + 1 == k){res = (res > (n - x + 1)) ? res : (n - x + 1);}
            prev = x;
        }

        printf("%ld\n", res);
    }

    return 0;
}
