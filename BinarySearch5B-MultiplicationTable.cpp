#include <cstdio>
#include <vector>
typedef long long ll;

bool check(ll n, ll k, ll x){
    ll cnt(0);
    for(ll row = 1; row <= n; row++){
        ll div = (x / row);
        div = (div < n) ? div : n;
        cnt += div;
        if(cnt >= k){return true;}
    }

    return false;
}

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);

    ll left(1), right(n * n + 7), res(0);
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(n, k, mid)){res = mid; right = mid - 1;}
        else{left = mid + 1;} 
    }

    printf("%lld\n", res);

    return 0;
}
