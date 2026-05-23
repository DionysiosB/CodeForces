#include <cstdio>
#include <vector>
typedef long long ll;

bool check(const std::vector<ll> a, ll k, ll x){

    ll rem = x * k;
    for(ll p = 0; p < a.size(); p++){
        ll cur = (a[p] < x) ? a[p] : x;
        rem -= cur;
        if(rem <= 0){return true;}
    }

    return false;
}

int main(){

    ll k; scanf("%lld", &k);
    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}

    ll left(0), right(1e11), res(0);
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(a, k, mid)){res = mid; left = mid + 1;}
        else{right = mid - 1;}
    }

    printf("%lld\n", res);

    return 0;
}
