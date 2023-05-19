#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

ll gcd (ll a, ll b){return (b == 0) ? a : gcd (b, a % b);}

bool check(const std::vector<ll> v, ll num, ll x, ll a, ll y, ll b, ll lcm, ll k){

    ll both = num / lcm;
    ll fc = (num / a) - both;
    ll sc = (num / b) - both;

    ll total(0);
    for(ll p = 0; p < num; p++){
        if(both > 0){total += (v[p] * (x + y) / 100); --both;}
        else if(fc > 0){total += v[p] * x / 100; --fc;}
        else if(sc > 0){total += v[p] * y / 100; --sc;}
    }

    return (total >= k);
}

int main(){
    ll q; scanf("%lld", &q);
    while(q--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n); for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}
        ll x, a, y, b, k; scanf("%lld %lld %lld %lld %lld", &x, &a, &y, &b, &k);
        if(x < y){ll t = x; x = y; y = t; t = a; a = b; b = t;}
        ll g = gcd(a, b); ll lcm = a * b / g;
        sort(v.rbegin(), v.rend());

        ll left(1), right(n), res(-1);
        while(left <= right){
            ll mid = (left + right) / 2;
            if(check(v, mid, x, a, y, b, lcm, k)){res = mid; right = mid - 1;}
            else{left = mid + 1;}
        }

        printf("%lld\n", (res > 0) ? res : -1);
    }

    return 0;
}
