#include <iostream>
#include <algorithm>

int main(){

    const std::string mirror = "8??3694705";
    std::string s; std::cin >> s;
    std::string t(s); reverse(t.begin(), t.end());
    for(int p = 0; p < t.size(); p++){t[p] = mirror[t[p] - '0'];}
    std::cout << ((s == t) ? "Yes" : "No") << std::endl;

    return 0;
}
