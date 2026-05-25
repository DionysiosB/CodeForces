#include<cstdio>

int main(){

    long n; scanf("%ld", &n);
    long t(0); while(t * t < n){++t;}

    while(n){
        long x = ( (n - 1) / t) * t;
        for(long p = x + 1; p <= n; p++){printf("%ld ", p);}
        n = x;
    }

    return 0;
}
