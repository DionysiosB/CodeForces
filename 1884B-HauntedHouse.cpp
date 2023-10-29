#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);

    ll t; std::cin >> t;
    while(t--){
        ll n; std::cin >> n;
        std::string s; std::cin >> s;
        std::vector<ll> v; ll cur(0);
        for(ll p = n - 1; p >= 0; p--){
            if(s[p] == '1'){++cur;}
            else{v.push_back(cur);}
        }

        for(ll p = 1; p < v.size(); p++){v[p] += v[p - 1];}
        for(ll p = 0; p < n; p++){std::cout << (p < v.size() ? v[p] : -1) << " ";}
        std::cout << std::endl;
    }

}
