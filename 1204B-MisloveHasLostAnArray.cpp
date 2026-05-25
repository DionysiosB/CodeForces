#include <cstdio>
typedef long long ll;

int main(){

    ll n, l, r; scanf("%lld %lld %lld", &n, &l, &r);
    ll fl = (n - l + 1); for(long p = 1; p < l; p++){fl += (1 << p);}
    --r; ll fr = 0; for(long p = 0; p < n; p++){fr += (1 << ((p < r) ? p : r));}
    printf("%lld %lld\n", fl, fr);

    return 0;
}
