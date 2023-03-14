#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long u(0), v(0), res(0);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            if(x == 1){++u;}
            else if(x == 2){v += u; u = 0;}

            long cur = u + (v > 0) * (v + 2) / 2;
            res = (res > cur) ? res : cur;
        }

        printf("%ld\n", res);
    }

}
