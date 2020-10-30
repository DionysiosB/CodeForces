#include <cstdio>
typedef long long ll;

bool check(ll w, ll h, ll n, ll x){return (x / w) * (x / h) >= n;}

int main(){

    ll w, h, n; scanf("%lld %lld %lld", &w, &h, &n); 
    ll left(0), right(1), res(0);
    while(!check(w, h, n, right)){right *= 2;}
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(w, h, n, mid)){res = mid; right = mid - 1;}
        else{left = mid + 1;}
    }

    printf("%lld\n", res);

    return 0;
}
