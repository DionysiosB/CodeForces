#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll w, h, n; scanf("%lld %lld %lld", &w, &h, &n);
        ll s = w * h;
        ll cnt(1);
        while(s % 2 == 0){cnt *= 2; s /= 2;}
        puts(cnt >= n ? "YES" : "NO");

    }

}
