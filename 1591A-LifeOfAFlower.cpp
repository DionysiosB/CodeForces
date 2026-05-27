#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long prev(0), res(1);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            if(res < 0){continue;}
            if(x){res += prev ? 5 : 1;}
            else if(p && !prev){res = -1;}
            prev = x;
        }

        printf("%ld\n", res);
    }

}
