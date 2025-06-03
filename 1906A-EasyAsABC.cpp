#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::vector<std::string> v(3);
    std::cin >> v[0] >> v[1] >> v[2];
    std::string res("CCC");

    for(int p = 0; p < 9; p++){
        for(int q = 0; q < 9; q++){
            for(int r = 0; r < 9; r++){
                if(p == q || p == r || q == r){continue;}
                int rowa(p / 3), cola(p % 3);
                int rowb(q / 3), colb(q % 3);
                int rowc(r / 3), colc(r % 3);

                if(std::abs(rowa - rowb) > 1 || std::abs(cola - colb) > 1){continue;}
                if(std::abs(rowb - rowc) > 1 || std::abs(colb - colc) > 1){continue;}

                std::string x;
                x += v[rowa][cola];
                x += v[rowb][colb];
                x += v[rowc][colc];

                res = (res < x ? res : x);
            }
        }
    }

    std::cout << res << std::endl;

}
