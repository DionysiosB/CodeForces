#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a; scanf("%ld", &a);
        long mx(a), diff(0);
        for(long p = 1; p < n; p++){
            long a; scanf("%ld", &a);
            if(a > mx){mx = a;}
            else{
                long cur = mx - a;
                diff = (diff > cur) ? diff : cur;
            }
        }

        long cnt(0);
        while(diff){++cnt; diff /= 2;}
        printf("%ld\n", cnt);
    }

    return 0;
}
