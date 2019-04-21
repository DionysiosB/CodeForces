#include<iostream>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;

    ll dp[3] = {1, 1, 0};
    ll t[3] = {0};

    std::string s; std::cin >> s;
    for(long p = 0; p < s.size(); p++){
        t[0] = t[1] = t[2] = 0;
        if(s[p] == '0' || s[p] == '?'){t[0] += dp[0];}
        if(s[p] == '1' || s[p] == '?'){t[0] += dp[2]; t[1] += dp[0];}
        if(s[p] == '2' || s[p] == '?'){t[1] += dp[2];}
        if(s[p] == '*' || s[p] == '?'){t[2] += dp[1] + dp[2];}
        for(int q = 0; q < 3; q++){dp[q] = t[q] % MOD;}
    }

    std::cout << ((dp[0] + dp[2]) % MOD) << std::endl;
    return 0;
}
