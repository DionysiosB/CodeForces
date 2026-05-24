#include <iostream>
#include <vector>

int main(){

    std::string s; std::cin >> s;
    bool start(0);
    std::vector<char> v;
    for(long p = s.size() - 1; p >= 0; p--){
        start |= (s[p] != '0');
        if(start){v.push_back(s[p]);}
    }

    bool palindrome(true);
    for(long p = 0; p < v.size() / 2; p++){if(v[p] != v[v.size() - p - 1]){palindrome = false; break;}}
    std::cout << (palindrome ? "YES" : "NO") << std::endl;

    return 0;
}
