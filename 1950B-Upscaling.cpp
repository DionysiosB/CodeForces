#include <iostream>

int main(){
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s, t;
        for(int p = 0; p < n; p++){
            s += (p % 2 ? ".." : "##");
            t += (p % 2 ? "##" : "..");
        }

        for(int row = 0; row < 2 * n; row++){std::cout << (row % 4 < 2 ? s : t) << std::endl;}
    }

}
