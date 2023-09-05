#include <iostream>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    ll t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        ll cur(0), add(0), res(s.size());
        for(ll p = 0; p < s.size(); p++){
            cur += (s[p] == '+') - (s[p] == '-');
            if(add + cur < 0){res += (p + 1); ++add;}
        }

        std::cout << res << std::endl;
    }

    return 0;
}
