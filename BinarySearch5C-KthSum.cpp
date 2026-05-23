#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

bool check(const std::vector<ll> &a, const std::vector<ll> &b, ll k, ll x){

    ll idx(b.size() - 1);
    ll cnt(0);
    for(long p = 1; p < a.size(); p++){
        if(a[p] >= x){break;}
        while(idx > 0 && a[p] + b[idx] > x){--idx;}
        cnt += idx;
    }

    return (cnt >= k);
}

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<ll> a(n + 1); for(ll p = 1; p <= n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> b(n + 1); for(ll p = 1; p <= n; p++){scanf("%lld", &b[p]);}
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll left(0), right(1e10), res(0);
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(a, b, k, mid)){res = mid; right = mid - 1;}
        else{left = mid + 1;}
    }

    printf("%lld\n", res);

    return 0;
}
