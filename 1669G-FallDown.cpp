#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long nr, nc; std::cin >> nr >> nc;
        std::vector<std::string> v(nr);
        for(long row = 0; row < nr; row++){std::cin >> v[row];}

        for(long col = 0; col < nc; col++){
            long b(nr - 1);
            for(long row = nr - 1; row >= 0; row--){
                if(v[row][col] == '*'){
                    v[row][col] = '.';
                    v[b][col]   = '*';
                    --b;
                }
                else if(v[row][col] == 'o'){b = row - 1;}
            }
        }

        for(long row = 0; row < nr; row++){std::cout << v[row] << std::endl;}
    }

}
