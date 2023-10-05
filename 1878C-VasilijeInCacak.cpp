#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, k, x; scanf("%lld %lld %lld", &n, &k, &x);
        ll mn = k * (k + 1) / 2;
        ll mx = n * k - k * (k - 1) / 2;
        puts(mn <= x && x <= mx ? "YES" : "NO");
    }

}
