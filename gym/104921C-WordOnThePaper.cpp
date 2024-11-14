#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::vector<std::string> r(8);
        for(long p = 0; p < 8; p++){std::cin >> r[p];}

        std::string s("");
        for(long col = 0; col < 8; col++){
            for(long row = 0; row < 8; row++){
                if(r[row][col] != '.'){s += r[row][col];}
            }
        }

        std::cout << s << std::endl;
    }

}
