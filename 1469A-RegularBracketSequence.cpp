#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        puts((s[0] == ')' || s[s.size() - 1] == '(' || s.size() % 2) ? "NO" : "YES");
    }


}
