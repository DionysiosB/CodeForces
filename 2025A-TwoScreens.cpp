#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;
        long ans = a.size() + b.size() + (a[0] == b[0]);
        for(long p = 0; p < a.size() && p < b.size() && a[p] == b[p]; p++){--ans;}
        std::cout << ans << std::endl;
    }

}
