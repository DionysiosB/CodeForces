#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){

        ll A, B; scanf("%lld %lld", &A, &B);
        ll b(9), cnt(0);
        while(b <= B){cnt += A; b = 10 * b + 9;}
        printf("%lld\n", cnt);
    }

    return 0;
}
