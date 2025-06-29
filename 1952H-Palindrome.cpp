#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<std::string> v(n);
    for(long p = 0; p < n; p++){std::cin >> v[p];}

    for(long idx = 0; idx < n; idx++){
        std::string s("");
        for(long row = 0; row < n; row++){
            if(idx >= v[row].size()){continue;}
            s += v[row][idx];
        }

        std::string u(s); std::reverse(u.begin(), u.end()); 
        std::cout << (s == u ? "YES" : "NO") << std::endl;
    }

}
