#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0); bool cur(0);
        while(n--){
            long x; scanf("%ld", &x);
            if(x){cur = 1;}
            else if(cur){++cnt; cur = 0;}
        }

        cnt += cur;
        cnt = (cnt < 2) ? cnt : 2;
        printf("%ld\n", cnt);
    }

}
