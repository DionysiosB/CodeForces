#include <cstdio>

int main(){

    long long n; scanf("%lld", &n);
    if(n < 13){printf("%lld\n", (1LL << n));}
    else{printf("%lld\n", (((1LL<<13)-100)<<(n-13)));}

    return 0;
}
