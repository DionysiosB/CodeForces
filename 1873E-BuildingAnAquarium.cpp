#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;


ll volume(const std::vector<ll> &v, ll h){
    ll total(0);
    for(ll p = 0; p < v.size(); p++){total += (h > v[p]) * (h - v[p]);}
    return total;
}


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, x; scanf("%lld %lld", &n, &x);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        ll left(0), right(2e9 + 7), res(0);
        while(left <= right){
            ll height = (left + right) / 2;
            ll vol = volume(a, height);
            if(vol <= x){res = height; left = height + 1;}
            else{right = height - 1;}
        }

        printf("%lld\n", res);
    }

}
