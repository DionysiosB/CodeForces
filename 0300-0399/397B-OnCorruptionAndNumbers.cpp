#include <cstdio>

int main(){

    int t(0); scanf("%d", &t);
    while(t--){
        long long n(0), l(0), r(0); scanf("%lld %lld %lld",  &n, &l, &r);
        puts(r * (n / l) >= n ? "Yes" : "No");
    }

    return 0;
}
