#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, x; scanf("%ld %ld %ld", &n, &k, &x);
        if(n < k || x < k - 1){puts("-1"); continue;}
        if(x == k){--x;}
        long res = k * (k - 1) / 2 + (n - k) * x;
        printf("%ld\n", res);
    }

}
