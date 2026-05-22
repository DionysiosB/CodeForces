#include<cstdio>
#include<vector>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    ll m(1e16);
    std::vector<ll> a(n);
    for(ll p = 0; p < n; p++){scanf("%lld ", &a[p]); m = (m < a[p]) ? m : a[p];}
    for(ll p = 0; p < n; p++){a[p] -= m;}
    ll toAdd(m * n), pos = (k > 0) ? (k - 1) : (n - 1);
    while(a[pos] > 0){a[pos]--; --pos; ++toAdd; if(pos < 0) pos += n;}
    a[pos] = toAdd;
    for(int p = 0; p < n; p++){printf("%lld ", a[p]);}

    return 0;
}
