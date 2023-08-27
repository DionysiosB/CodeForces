#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll res(0), left(0), right(2e9 + 15);
        while(left <= right){
            ll mid = (left + right) / 2;
            ll comb = mid * (mid - 1) / 2;
            if(comb <= n){res = mid + (n - comb); left = mid + 1;}
            else{right = mid - 1;}
        }

        printf("%lld\n", res);
    }

}
