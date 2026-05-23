#include <cstdio>
#include <vector>
typedef long long ll;

bool check(const std::vector<ll> &a, const ll k, ll x){

    ll rem(k), s(0);
    for(long p = 0; p < a.size(); p++){
        if(a[p] > x){return false;}
        if(s + a[p] <= x){s += a[p];}
        else{--rem; s = a[p];}
        if(rem < 0){return false;}
    }

    if(s > 0 && rem <= 0){return false;}
    return true;
}


int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<ll> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}

    ll left(0), right(1e15), res(1e15);
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(a, k, mid)){res = mid; right = mid - 1;}
        else{left = mid + 1;}
    }

    printf("%lld\n", res);

    return 0;
}
