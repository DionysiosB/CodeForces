#include <iostream>

bool check(std::string s, std::string t, long d){
    if(s.size() % d != 0 || t.size() % d != 0){return false;}
    for(long p = 0; p < s.size(); p++){if(s[p] != t[p % d]){return false;}}
    for(long p = 0; p < t.size(); p++){if(t[p] != s[p % d]){return false;}}
    return true;
}

int main(){

    std::string a, b; getline(std::cin, a); getline(std::cin, b);
    long total(0);
    for(long p = 1; p <= a.size() && p <= b.size(); p++){total += check(a, b, p);}
    std::cout << total << std::endl;

    return 0;
}
