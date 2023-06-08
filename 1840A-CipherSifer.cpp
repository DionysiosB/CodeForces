#include <iostream>

int main(){

    long t; std::cin>>t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long idx(0);
        while(idx < n){
            char ch=s[idx];
            std::cout << ch;
            ++idx;
            while(idx < n && s[idx] != ch){++idx;}
            ++idx;
        }
        
        std::cout << std::endl;
    }
}
