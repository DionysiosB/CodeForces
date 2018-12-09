#include <cstdio>

int main(){

    long long n(0), a(0), b(0); scanf("%lld %lld %lld", &n, &a, &b);

    while(n--){
        long long tokens(0); scanf("%lld", &tokens);
        long long output = ((tokens * a) % b) / a;
        printf("%lld ", output);
    }

    puts("");
    return 0;
}
