#include <cstdio>
typedef long long ll;

bool check(ll n, ll k){
    
    ll v(0), t(n);
    while(t > 0){
        ll u = (t < k) ? t : k;
        v += u; t -= u; t -= (t / 10);
    }

    return (2 * v >= n);
}

int main(){

    ll n; scanf("%lld", &n);
    ll left(1), right(n + 1), ans(-1);
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(n, mid)){ans = mid; right = mid - 1;}
        else{left = mid + 1;}
    }

    printf("%lld\n", ans);

    return 0;
}
