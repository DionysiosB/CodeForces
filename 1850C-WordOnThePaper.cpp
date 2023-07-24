#include <iostream>
#include <vector>

int main(){

    const int B = 8;

    long t; std::cin >> t;
    while(t--){
        std::vector<std::string> m(B);
        for(long p = 0; p < B; p++){std::cin >> m[p];}

        int sr(-1), sc(-1);
        for(int row = 0; sr < 0 && row < B; row++){
            for(int col = 0; sc < 0 && col < B; col++){
                if(m[row][col] != '.'){sr = row; sc = col;}
            }
        }

        std::string res("");
        for(int row = sr; row < B && m[row][sc] != '.'; row++){res += m[row][sc];}
        std::cout << res << std::endl;
    }

}
