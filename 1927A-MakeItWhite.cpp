#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long start(0); while(s[start] == 'W'){++start;}
        long stop(s.size() - 1); while(s[stop] == 'W'){--stop;}
        long len = stop - start + 1;
        std::cout << len << std::endl;
    }

}
