#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m, k; scanf("%lld %lld %lld", &n, &m, &k);
        ll left(0), right(m), res(-1);
        while(left <= right){
            ll mid = (left + right) / 2;
            ll tmp = n * (( m / (mid + 1)) * mid + m % (mid + 1));
            if(tmp >= k){res = mid; right = mid - 1;}
            else{left = mid + 1;}
        }

        printf("%lld\n", res);
    }

}
