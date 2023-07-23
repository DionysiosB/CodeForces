#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long win(0), quality(0);
        for(long p = 1; p <= n; p++){
            int a, b; scanf("%d %d", &a, &b);
            if(a > 10){continue;}
            if(b > quality){quality = b; win = p;}
        }

        printf("%ld\n", win);
    }

}
