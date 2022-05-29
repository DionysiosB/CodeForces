#include <iostream>
#include <string>

int main(){

    long q; std::cin >> q;
    while(q--){
        std::string s, t; std::cin >> s >> t;
        long long res(1);
        if(t.size() == 1 && t[0] == 'a'){res = 1;}
        else if(t.find("a") != std::string::npos){res = -1;}
        else{res = (1LL << s.size());}

        std::cout << res << std::endl;
    }

}
