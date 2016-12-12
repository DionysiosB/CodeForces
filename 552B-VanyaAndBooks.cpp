#include <cstdio>

int main(){

    long long n; scanf("%lld\n", &n);
    long long d(1), start(1), end(10), total(0);

    while(start <= n){
        if(n < end){end = n + 1;}
        total += d * (end - start);
        start = end;
        end *= 10;
        ++d;
    }

    printf("%lld\n", total);

    return 0;
}
