#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        bool res = (n % 2 == k % 2) && (n >= k * k);
        puts(res ? "YES" : "NO");
    }

    return 0;
}
