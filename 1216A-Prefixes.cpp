#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;

    long cnt(0);
    for(long p = 1; p < s.size(); p += 2){
        if(s[p] != s[p - 1]){continue;}
        s[p] = (s[p - 1] == 'a' ? 'b' : 'a'); 
        ++cnt;
    }

    std::cout << cnt << std::endl;
    std::cout << s << std::endl;

    return 0;
}
