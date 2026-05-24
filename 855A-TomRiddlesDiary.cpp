#include <iostream>
#include <set>

int main(){

    long n; std::cin >> n;
    std::set<std::string> s;
    while(n--){
        std::string x; std::cin >> x;
        std::cout << (s.count(x) > 0 ? "YES" : "NO") << std::endl;
        s.insert(x);
    }

    return 0;
}
