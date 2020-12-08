#include <iostream>
#include <map>
typedef long long ll;

int main(){

    ll n; std::cin >> n;
    std::map<ll, ll> b;
    for(ll k = 0; k < n; k++){
        std::string s; std::cin >> s;
        ll cur(0), neg(0);
        for(ll p = 0; p < s.size(); p++){
            cur += (s[p] == '(') - (s[p] == ')');
            neg = (neg < cur) ? neg : cur;
        }
        if((neg < 0) && (cur > neg)){continue;}
        ++b[cur];
    }

    ll res(0);
    for(std::map<ll, ll>::iterator it = b.begin(); it != b.end(); it++){
        ll x = it->first;
        ll cnt = it->second;
        if(x >= 0 && b.count(-x)){res += cnt * b[-x];}
    }

    std::cout << res << std::endl;

    return 0;
}
