#include<iostream>
#include<algorithm>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::string rev(s); std::reverse(rev.begin(), rev.end());
        std::string a(s), b(rev + s);
        std::cout << (a < b ? a : b) << std::endl;
    }

}
