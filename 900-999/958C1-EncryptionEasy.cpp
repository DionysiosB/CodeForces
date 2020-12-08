#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);

    ll cs(0);
    std::vector<ll> a(n), b(n); 
    for(long p = 0; p < n; p++){scanf("%lld", &a[p]); cs += a[p]; b[p] = cs;}

    ll mx(0);
    for(long p = 0; p < n - 1; p++){
        ll test = b[p] % m + (cs - b[p]) % m;
        mx = (mx > test) ? mx : test;
    }

    printf("%lld\n", mx);

    return 0;
}
