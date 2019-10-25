#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll q; scanf("%lld", &q);
    while(q--){
        ll n, m; scanf("%lld %lld", &n, &m);
        ll b(n / m), s(0);
        std::vector<ll> a(10); for(ll p = 0; p < 10; p++){a[p] = ((p + 1) * m) % 10; s+= a[p];}
        ll t = (b / 10) * s; b %= 10;
        for(long p = 0; p < b; p++){t += a[p];}
        printf("%lld\n", t);
    }

    return 0;
}
