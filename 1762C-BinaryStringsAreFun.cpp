#include <iostream>
typedef long long ll;

int main(){

    const ll MOD = 998244353;

    ll t; std::cin >> t;
    while(t--){
        ll n; std::cin >> n;
        std::string s; std::cin >> s;

        ll cnt(0), cur(1);
        for(ll p = 0; p < s.size(); p++){
            if(p && s[p - 1] == s[p]){cur = 2 * cur % MOD;}
            else{cur = 1;}
            cnt = (cnt + cur) % MOD;
        }

        printf("%lld\n", cnt);
    }

}
