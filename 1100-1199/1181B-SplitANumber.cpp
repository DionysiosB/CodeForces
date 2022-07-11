#include <iostream>

std::string stringsum(std::string a, std::string b){

    std::string res("");
    int carry(0);
    for(long p = 0; p < a.size() || p < b.size() || carry; p++){
        long x = p < a.size() ? a[a.size() - 1 - p] : '0';
        long y = p < b.size() ? b[b.size() - 1 - p] : '0';
        long z = carry + x + y - 2 * '0';
        if(z > 9){carry = 1; z -= 10;}
        else{carry = 0;}
        char digit = '0' + z;
        res = digit + res;
    }

    return res;
}

int main(){

    std::ios_base::sync_with_stdio(false);
    long l; std::cin >> l;
    std::string s; std::cin >> s;
    std::string ans = s;
    for(long p = (s.size() + 1) / 2; p < s.size(); p++){
        if(s[p] == '0'){continue;}
        std::string tmp = stringsum(s.substr(0, p), s.substr(p));
        if((tmp.size() < ans.size()) || (tmp.size() == ans.size() && tmp < ans)){ans = tmp;}
        break;
    }

    for(long p = (s.size() - 1) / 2; p > 0; p--){
        if(s[p] == '0'){continue;}
        std::string tmp = stringsum(s.substr(0, p), s.substr(p));
        if((tmp.size() < ans.size()) || (tmp.size() == ans.size() && tmp < ans)){ans = tmp;}
        break;
    }

    std::cout << ans << std::endl;

    return 0;
}
