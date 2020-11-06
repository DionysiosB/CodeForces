#include <cstdio>
#include <vector>
typedef long long ll;


bool check(const std::vector<ll> a, const ll k, ll x){

    ll last(-1e15), rem(k);
    for(ll p = 0; p < a.size(); p++){
        if(a[p] - last >= x){
            last = a[p];
            --rem; if(rem <= 0){return true;}
        }
    }

    return false;
}


int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<ll> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}

    ll left(0), right(1e10), res(0);
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(a, k, mid)){res = mid; left = mid + 1;}
        else{right = mid - 1;}
    }

    printf("%lld\n", res);

    return 0;
}
