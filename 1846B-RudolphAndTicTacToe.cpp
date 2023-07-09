#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::vector<std::string> b(3);
        for(int p = 0; p < 3; p++){std::cin >> b[p];}

        std::string res = "DRAW";
        if(b[0][0] == b[1][1] && b[1][1] == b[2][2] && b[1][1] != '.'){res = b[1][1];}
        else if(b[2][0] == b[1][1] && b[1][1] == b[2][0] && b[1][1] != '.'){res = b[1][1];}

        for(int row = 0; res.size() > 1 && row < 3; row++){
            if(b[row][0] == b[row][1] && b[row][1] == b[row][2] && b[row][0] != '.'){res = b[row][0];}
        }

        for(int col = 0; res.size() > 1 && col < 3; col++){
            if(b[0][col] == b[1][col] && b[1][col] == b[2][col] && b[0][col] != '.'){res = b[0][col];}
        }

        std::cout << res << std::endl;
    }

}
