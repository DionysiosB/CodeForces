#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}
    std::vector<ll> dp, dn; 
    for(ll p = 0; p < n; p++){
        ll diff = a[p] - b[p];
        if(diff > 0){dp.push_back(diff);}
        else{dn.push_back(diff);}
    }

    sort(dn.begin(), dn.end());
    sort(dp.rbegin(), dp.rend());

    ll lenpos = dp.size();
    ll cnt = lenpos * (lenpos - 1) / 2;
    ll idx(0);
    for(ll k = 0; k < dn.size(); k++){
        ll cur = dn[k];
        while((idx < dp.size()) && (cur + dp[idx] > 0)){++idx;}
        cnt += idx;
    }

    printf("%lld\n", cnt);

    return 0;
}
