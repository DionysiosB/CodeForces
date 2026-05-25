#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll x, y; scanf("%lld %lld", &x, &y);
        puts(x - y > 1 ? "YES" : "NO");
    }

    return 0;
}
