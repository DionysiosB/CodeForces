#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a, b;
    for(ll p = 0; p < n; p++){
        ll x; scanf("%lld", &x);
        if(x % 2){b.push_back(x);}
        else{a.push_back(x);}
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll sum(0);

    if(a.size() > b.size()){for(ll p = 0; p + b.size() + 1 < a.size(); p++){sum += a[p];}}
    else{for(ll p = 0; p + a.size() + 1 < b.size(); p++){sum += b[p];}}
    printf("%lld\n", sum);

    return 0;
}
