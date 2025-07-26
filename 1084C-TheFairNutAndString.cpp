#include <iostream>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;
    std::ios_base::sync_with_stdio(false);

    std::string s; std::cin >> s;
    ll r(0), t(0);
    for(char c : s){
        if(c == 'a'){r += (t + 1); r %= MOD;}
        else if(c == 'b'){t = r;}
    }

    std::cout << r << std::endl;

    return 0;
}
