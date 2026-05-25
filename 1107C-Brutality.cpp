#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    ll n, k; std::cin >> n >> k;
    std::vector<ll> v(n); for(ll p = 0; p < n; p++){std::cin >> v[p];}
    std::string s; std::cin >> s;

    long idx(0); ll dmg(0);
    while(idx < n){
        char x = s[idx];
        std::vector<ll> a;
        while(idx < n && s[idx] == x){a.push_back(v[idx]); ++idx;}
        sort(a.rbegin(), a.rend());
        for(ll p = 0; p < a.size() && p < k; p++){dmg += a[p];}
    }

    std::cout << dmg << std::endl;

    return 0;
}
