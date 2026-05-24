#include <cstdio>
#include <vector>
typedef long long ll;

ll find(const std::vector<ll> &a, ll m){
    ll left(0), right(a.size() - 1), res(0);
    while(left <= right){
        ll mid = (left + right) / 2;
        if(m < a[mid]){res = mid; right = mid - 1;}
        else{left = mid + 1;}
    }

    return res;
}

int main(){

    ll n, q; scanf("%lld %lld", &n, &q);
    std::vector<ll> a(n, 0); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    for(ll p = 1; p < n; p++){a[p] += a[p - 1];}

    ll k(0), idx(0);
    while(q--){
        ll x; scanf("%lld", &x); k += x;
        if(k >= a.back()){k = 0; idx = 0;}
        else{idx = find(a, k);}
        printf("%lld\n", n - idx);
    }

    return 0;
}
