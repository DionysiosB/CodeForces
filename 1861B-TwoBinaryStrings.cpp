#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;
        bool possible(false);
        for(long p = 1; !possible &&  p < a.size(); p++){
            if(a[p] == '1' && b[p] == '1' && a[p - 1] == '0' && b[p - 1] == '0'){possible = true;}
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
