#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string a, b, c; std::cin >> a >> b >> c;
        bool res(true);
        for(long p = 0; p < a.size(); p++){if(!(a[p] == c[p] || b[p] == c[p])){res = false; break;}}
        std::cout << (res ? "YES" : "NO") << std::endl;
    }

    return 0;
}
