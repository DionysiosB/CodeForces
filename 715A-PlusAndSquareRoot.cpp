#include <cstdio>

int main(){
    long long n; scanf("%lld\n", &n);
    for(long long p = 1; p <= n; p++){
        if(p == 1){puts("2");}
        else{printf("%lld\n", p * (p + 1) * (p + 1) - (p - 1));}
    }
    return 0;
}
