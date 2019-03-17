#include<cstdio>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    ll mx(0);

    while(10 * mx + 9 <= 2 * n - 1){mx = 10 * mx + 9;}
    ll cnt(0);

    for(ll p = mx; p <= 2 * n - 1; p += mx + 1){
        ll left = (p - n > 1) ? (p - n) : 1;
        ll r = p - left;
        cnt += (r - left + 1) / 2;
    }

    printf("%lld",cnt);

    return 0;
}
