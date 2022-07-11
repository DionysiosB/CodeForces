#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long cnt(0);
    for(long p = 0; p < s.size(); p++){cnt += (s[p] == '0') - (s[p] == '1');}
    if(cnt){std::cout << "1\n" << s << std::endl;}
    else{std::cout << "2\n" << s[0] << " " << s.substr(1) << std::endl;}

    return 0;
}
