#include <iostream>

int main(){

    long n; std::cin >> n;
    while(n--){
        long len; std::cin >> len; 
        std::string s; std::cin >> s;
        if(s.size() <= 1){std::cout << "NO\n";}
        if(s.size() <= 2 && s[0] >= s[1]){std::cout << "NO\n";}
        else{std::cout << "YES\n2\n" << s[0] << " " << s.substr(1) << "\n";}
    }

    return 0;
}
