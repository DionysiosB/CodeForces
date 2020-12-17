#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>
typedef long long ll;


void getSums(const std::vector<ll> &a, std::set<ll> &sums, ll start, ll end){
    if(start >= end){return;}

    ll cs(0); for(ll p = start; p < end; p++){cs += a[p];}
    sums.insert(cs);

    if(a[start] == a[end - 1]){return;}

    ll mid = (a[start] + a[end - 1]) / 2;
    ll idx(start); while(a[idx] <= mid){++idx;}

    getSums(a, sums, start, idx);
    getSums(a, sums, idx, end);

    return;
}


int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, q; scanf("%lld %lld", &n, &q);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.begin(), a.end());
        std::set<ll> s;
        getSums(a, s, 0, n);

        while(q--){
            ll x; scanf("%lld", &x);
            puts(s.count(x) ? "Yes" : "No");
        }
    }

}
