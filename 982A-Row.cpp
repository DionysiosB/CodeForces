#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;

    bool valid(true);

    for(long p = 1; p < s.size(); p++){
        if(s[p - 1] == '1' && s[p] == '1'){valid = false; break;}
    }

    if(n == 1 && s[0] == '0'){valid = false;}
    if(n >= 2 && s[n - 2] == '0' && s[n - 1] == '0'){valid = false;}
    if(n >= 2 && s[0] == '0' && s[1] == '0'){valid = false;}
    for(long p = 1; p < s.size() - 1; p++){
        if(s[p - 1] == '0' && s[p] == '0' && s[p + 1] == '0'){valid = false; break;}
    }

    std::cout << (valid ? "Yes" : "No") << std::endl;

    return 0;
}
