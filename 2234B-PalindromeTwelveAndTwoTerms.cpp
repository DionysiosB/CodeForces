#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long n; scanf("%lld", &n);
        if(n == 10){puts("-1"); continue;}
        else if(n % 12 == 10){printf("%d %lld\n", 22, n - 22);}
        else{printf("%lld %lld\n", n % 12, 12 * (n / 12));}
    }

}
