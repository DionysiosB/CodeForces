#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, s; scanf("%lld %lld", &n, &s);
        printf("%lld\n", s / (n * n));
    }

}
