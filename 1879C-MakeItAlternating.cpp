#include <iostream>
typedef long long ll;

int main(){

    const ll MOD = 998244353;

    ll t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        s += "_";
        ll cnt(1), sum(0), prod(1);
        for(long p = 1; p < s.size(); p++){
            if(s[p - 1] == s[p]){++cnt; continue;}
            sum += (cnt - 1);
            prod = (prod * cnt) % MOD;
            cnt = 1;
        }

        for(int p = 2; p <= sum; p++){prod = (prod * p) % MOD;}

        std::cout << sum << " " << prod << std::endl;
    }

}
