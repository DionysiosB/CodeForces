#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;
    long h(0), v(0);
    for(long p = 0; p < s.size(); p++){
        if(s[p] == '0'){
            std::cout << "2 " << (v + 1) << std::endl;
            ++v; v %= 4;
        }
        else if(s[p] == '1'){
            std::cout << "1 " << (2 * h + 1) << std::endl;
            h = 1 - h;
        }
    }

    return 0;
}
