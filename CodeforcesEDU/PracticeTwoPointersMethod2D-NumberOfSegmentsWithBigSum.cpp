#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, s; scanf("%lld %lld", &n, &s);
    std::vector<ll> a(n, 0); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    ll left(0), cur(0), cnt(0);
    for(ll p = 0; p < n; p++){
        cur += a[p];
        while(cur >= s){cur -= a[left]; ++left;}
        cnt += left;
    }

    printf("%lld\n", cnt);
}
