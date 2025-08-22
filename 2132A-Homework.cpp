#include <iostream>
#include <algorithm>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a; std::cin >> a;
        long m; std::cin >> m;
        std::string b; std::cin >> b;
        std::string w; std::cin >> w;

        std::string f(""), g("");
        for(size_t p = 0; p < m; p++){
            if(w[p] == 'V'){f += b[p];}
            else{g += b[p];}
        }

        std::reverse(f.begin(), f.end());
        std::cout << (f + a + g) << std::endl;
    }

}
