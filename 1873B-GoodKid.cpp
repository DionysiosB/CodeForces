#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        int n; scanf("%d", &n);
        long long prod(1); int m(10), z(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == 0){++z; continue;}
            prod *= x;
            if(x < m){m = x;}
        }

        if(z > 1){puts("0");}
        else if(z == 1){printf("%lld\n", prod);}
        else{printf("%lld\n", prod * (m + 1) / m);}
    }

}
