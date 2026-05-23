#include <cstdio>

int main(){

    long long a, b, mod; scanf("%lld %lld %lld", &a, &b, &mod);
    for(long long p = 1; p < mod && p <= a; p++){
        if((mod - (p * 1000000000LL) % mod) % mod > b){printf("1 %09lld", p); return 0;}
    }

    puts("2");

    return 0;
}
