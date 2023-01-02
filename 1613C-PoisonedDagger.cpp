#include <cstdio>
#include <vector>
typedef long long ll;


bool check(const std::vector<ll> &a, const ll &h, const ll &k){

    ll sum(0), cur(0); 
    for(ll p = 0; p < a.size(); p++){
        ll tst = a[p] + k - cur;
        sum += (tst < k) ? tst : k;
        cur = a[p] + k;
    }

    return (sum >= h);
}


int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, h; scanf("%lld %lld", &n, &h);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        ll left(0), right(h), res(0);
        while(left <= right){
            ll mid = (left + right) / 2;
            if(check(a, h, mid)){res = mid; right = mid - 1;}
            else{left = mid + 1;}
        }
        
        printf("%lld\n", res);
    }

}
