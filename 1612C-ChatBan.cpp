#include <cstdio>
typedef long long ll;

bool check(ll lines, ll k, ll x){
    ll total;
    if(lines <= k){total = lines * (lines + 1) / 2;}
    else{total = k * k - (2 * k - 1 - lines) * (2 * k - lines) / 2;}
    return total < x;
}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll k, x; scanf("%lld %lld", &k, &x);
        ll left(0), right(2 * k - 1), w(2 * k - 1);
        while(left <= right){
            ll mid = (left + right) / 2;
            if(check(mid, k, x)){left = mid + 1;}
            else{w = mid; right = mid - 1;}
        }

        printf("%lld\n", w);
    }

}
