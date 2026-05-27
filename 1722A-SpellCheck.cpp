#include <iostream>
#include <algorithm>

int main(){

    std::string target = "Timur";
    sort(target.begin(), target.end());

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        sort(s.begin(), s.end());
        std::cout << ((s == target) ? "YES" : "NO") << std::endl;
    }

}
