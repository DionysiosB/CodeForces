#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long n; scanf("%lld", &n); 
        printf("%lld\n", n + 2 * (n / 2) + 2 * (n / 3));
    }

}
