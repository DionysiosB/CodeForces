#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

ll f(std::vector<ll> &v, ll s){

    ll left(0), right(v.size() - 1);
    ll res(0);
    while(left < right){
        if(v[left] + v[right] > s){--right;}
        else{res += right - left; ++left;}
    }

    return res;
}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, lower, upper; scanf("%lld %lld %lld", &n, &lower, &upper);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.begin(), a.end());
        ll cnt = f(a, upper) - f(a, lower - 1);
        printf("%lld\n", cnt);
    }

}
