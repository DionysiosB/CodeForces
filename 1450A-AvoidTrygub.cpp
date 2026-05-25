#include <iostream>
#include <algorithm>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a; std::cin >> a;
        sort(a.begin(), a.end());
        std::cout << a << std::endl;
    }

}
