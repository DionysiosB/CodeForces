#include <iostream>
#include <vector>
 
int main(){
 
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::string> m(n); for(long p = 0; p < n; p++){std::cin >> m[p];}
        bool possible(true);
        for(long row = 0; row + 1 < m.size(); row++){
            for(long col = 0; col + 1 < m[0].size(); col++){
                if(m[row][col] == '0'){continue;}
                if(m[row + 1][col] == '0' && m[row][col + 1] == '0'){possible = false; break;}
            }
        }
 
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }
 
    return 0;
}
