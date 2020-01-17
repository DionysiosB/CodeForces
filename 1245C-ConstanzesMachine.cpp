#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;

    std::vector<ll> f(1e5 + 7, 0); f[1] = 1; f[2] = 2;
    for(long p = 3; p < f.size(); p++){f[p] = f[p - 1] + f[p - 2]; f[p] %= MOD;}

    std::string s; std::cin >> s;
    ll cnt(1), tmp(0);
    for(ll p = 0; p < s.size(); p++){
        if(s[p] == 'm' || s[p] == 'w'){cnt = 0; break;}
        else if(s[p] == 'u'){
            ++tmp;
            if(p + 1 == s.size() || s[p + 1] != s[p]){cnt *= f[tmp]; cnt %= MOD; tmp = 0;}
        }
        else if(s[p] == 'n'){
            ++tmp;
            if(p + 1 == s.size() || s[p + 1] != s[p]){cnt *= f[tmp]; cnt %= MOD; tmp = 0;}
        }
    }

    std::cout << cnt << std::endl;

    return 0;
}
