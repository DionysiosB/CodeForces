#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}
    std::vector<ll> fa(n, 0), fb(n, 0), fc(n, 0);
    fa[0] = a[0]; fb[0] = b[0]; fc[0] = 0;
    for(ll p = 1; p < n; p++){
        fa[p] = a[p] + (fb[p - 1] > fc[p - 1] ? fb[p - 1] : fc[p - 1]);
        fb[p] = b[p] + (fa[p - 1] > fc[p - 1] ? fa[p - 1] : fc[p - 1]);
        fc[p] = (fa[p - 1] > fb[p - 1] ? fa[p - 1] : fb[p - 1]);
    }

    ll ans = (fa.back() > fb.back()) ? fa.back() : fb.back();
    printf("%lld\n", ans);

    return 0;
}
