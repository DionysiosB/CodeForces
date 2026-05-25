#include <cstdio>
#include <vector>
typedef long long ll;


bool check(const std::vector<ll> &h, ll rows, ll t){

    if(t <= 0){return true;}
    ll cnt(0), avail(0);
    for(ll p = 0; p < h.size() && cnt < rows; p++){
        ll total = avail + h[p];
        cnt += (total / t);
        avail = total % t; avail = (h[p] < avail) ? h[p] : avail;
    }

    return (cnt >= rows);
}

int main(){

    ll q; scanf("%lld", &q);
    while(q--){
        ll n, k; scanf("%lld %lld", &n, &k);
        ll sumc(0); std::vector<ll> c(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &c[p]); sumc += c[p];}

        ll left(0), right(1 + sumc / k), res(0);
        while(left <= right){
            ll mid = (left + right) / 2;
            if(check(c, k, mid)){res = mid * k; left = mid + 1;}
            else{right = mid - 1;}
        }
        printf("%lld\n", res);
    }

    return 0;
}
