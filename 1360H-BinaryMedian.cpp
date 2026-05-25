#include <iostream>
typedef long long ll;

std::string numtobin(ll x){
    std::string s("");
    while(x){s += ('0' + x % 2); x /= 2;}
    return s;
}

ll bintonum(std::string s){
    ll x(0);
    for(long p = 0; p < s.size(); p++){x = 2 * x + (s[p] - '0');}
    return x;
}

int main(){



    return 0;
}
