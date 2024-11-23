#include <iostream>

int main(){

    long w(0);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long x; std::cin >> x;
        if(s == "B"){
            w -= x;
            std::cout << (w < 0 ? "YES" : "NO") << std::endl;
            w = (w > 0 ? w : 0);
        }
        else{w += x;}
    }

}
