#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> a(n + 1); for(ll p = 1; p <= n; p++){ll x; scanf("%lld", &x); a[x] = p;}
    std::vector<ll> b(n + 1);

    for(ll p = 0; p < m; p++){
        ll x, y; scanf("%lld%lld",&x,&y);
        x = a[x]; y= a[y];
        if(x > y){ll tmp = x; x = y; y = tmp;}
        b[y] = (b[y] > x + 1) ? b[y] : (x + 1);
    }


    ll left(1), cnt(0);
    for(ll p = 1; p <= n; p++){
        left = (left > b[p]) ? left : b[p];
        cnt += p - left + 1;
    }

    printf("%lld\n", cnt);

    return 0;
}
