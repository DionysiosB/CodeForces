#include <cstdio>

int main(){

    long long a(0), b(0); scanf("%lld %lld", &a, &b);

    long long total(0);

    while(a > 0 && b > 0){
        if(a >= b){total += (a / b); a %= b;}
        else{total += (b / a); b %= a;}
    }

    printf("%lld\n", total);

    return 0;
}
