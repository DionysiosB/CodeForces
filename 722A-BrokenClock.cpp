#include <iostream>

int main(){

    std::string t; std::cin >> t;
    std::string s; std::cin >> s;

    int h = 10 * (s[0] - '0') + (s[1] - '0');
    int m = 10 * (s[3] - '0') + (s[4] - '0');

    
    if(t == "24" && h > 23){s[0] = '0';}
    else if(t == "12" && h > 12 && s[1] != '0'){s[0] = '0';}
    else if(t == "12" && h > 12 && s[1] == '0'){s[0] = '1';}
    else if(t == "12" && h == 0){s[1] = '1';}
    if(m > 59){s[3] = '0';}
    std::cout << s << std::endl;

    return 0;
}
