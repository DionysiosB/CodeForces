#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string from; std::cin >> from;
        std::string to;   std::cin >> to;

        std::vector<bool> f(26, 0);

        long idx(to.size() - 1);
        bool possible(true);
        for(long p = from.size() - 1; possible && idx >= 0 && p >= 0; p--){
            if(from[p] == to[idx]){
                if(!f[from[p] - 'A']){--idx;}
                else{possible = false;}
            }
            else{f[from[p] - 'A'] = 1;}
        }

        possible = possible && (idx < 0);
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
