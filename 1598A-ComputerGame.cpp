#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        bool possible(true);
        for(long p = 0; p < a.size(); p++){if(a[p] == '1' && b[p] == '1'){possible = false; break;}}
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
