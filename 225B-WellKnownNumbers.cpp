#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    const ll L = 500;
    const ll B = 1e10;
    ll s, k; std::cin >> s >> k;
    std::vector<ll> f; f.push_back(0); f.push_back(1);
    ll cs(1);
    for(ll p = 0; p < L; p++){
        ll n = f.size(); f.push_back(cs);
        cs *= 2; if(n - k >= 0){cs -= f[n - k];}
        if(f[p] > B){break;}
    }

    std::vector<ll> v;
    for(ll p = f.size() - 1; p >= 0; p--){
        if(s < f[p]){continue;}
        v.push_back(f[p]); 
        s -= f[p]; 
        if(s <= 0){break;}
    }

    if(v.size() <= 1){v.push_back(0);}
    printf("%ld\n", v.size());
    for(ll p = 0; p < v.size(); p++){printf("%lld ", v[p]);}
    puts("");

    return 0;
}
