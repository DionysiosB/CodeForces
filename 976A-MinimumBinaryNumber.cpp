#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long z(0);
    for(long p = 0; p < s.size(); p++){z += (s[p] == '0');}
    if(s != "0"){std::cout << "1";} while(z--){std::cout << "0";}
    std::cout << std::endl;

    return 0;
}
