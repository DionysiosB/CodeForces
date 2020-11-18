#include <cstdio>
typedef long long ll;

bool check(ll n, ll x, ll y, ll t){
    if(t < x){return false;}
    ll w = (t / x) + ((t - x) / y);
    return w >= n;
}

int main(){

    ll n, x, y; scanf("%lld %lld %lld", &n, &x, &y); 
    if(x > y){ll tmp = x; x = y; y = tmp;}
    ll left(0), right(1e18), res(0);
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(n, x, y, mid)){res = mid; right = mid - 1;}
        else{left = mid + 1;}
    }

    printf("%lld\n", res);

    return 0;
}
