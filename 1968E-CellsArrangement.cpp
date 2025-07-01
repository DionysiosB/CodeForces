#include<cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long p = 1; p <= n - 2; p++){printf("%ld %ld\n", p, p);}
        printf("%ld %ld\n%ld %ld\n", n - 1, n, n, n);
    }

}
