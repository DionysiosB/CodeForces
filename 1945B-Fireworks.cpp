#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll a, b, m; scanf("%lld %lld %lld", &a, &b, &m);
        printf("%lld\n", (m + a) / a + (m + b) / b);
    }

}
