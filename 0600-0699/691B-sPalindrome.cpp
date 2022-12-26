#include<iostream>
#include<map>


int main(){

    std::string a("AbdHIMOopqTUVvWwXxY");
    std::string b("AdbHIMOoqpTUVvWwXxY");
    std::map<char, char> r;

    for(int p = 0; p < a.size(); p++){r[a[p]] = b[p];}

    std::string s; std::cin >> s;
    
    bool palindrome(true);
    for(long p = 0; p < s.size(); p++){if(r.count(s[p]) == 0 || r[s[p]] != s[s.size() - p - 1]){palindrome = false; break;}}

    std::cout << (palindrome ? "TAK" : "NIE") << std::endl;

    return 0;
}
