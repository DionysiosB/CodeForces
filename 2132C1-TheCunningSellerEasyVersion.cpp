#include<cstdio>
#include<vector>
#include<cmath>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v;
        ll y(n); while(y){v.push_back(y % 3); y /= 3;}
        ll total(0);
        for(ll p = 0; p < v.size(); p++){
            total += v[p] * (std::pow(3, p + 1) + p * std::pow(3, p - 1));
        }
        printf("%lld\n", total);
    }

}
