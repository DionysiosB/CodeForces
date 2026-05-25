#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long pos(-1);
    for(long p = 1; p < s.size(); p++){if(s[p] < s[p - 1]){pos = p + 1; break;}}
    if(pos < 0){std::cout << "NO" << std::endl;}
    else{std::cout << "YES\n" << (pos - 1) << " " << pos << std::endl;}

    return 0;
}
