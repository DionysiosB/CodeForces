#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long nr, nc; std::cin >> nr >> nc;
        std::vector<std::string> m(nr);
        for(long p = 0; p < nr; p++){std::cin >> m[p];}

        bool done(false);
        std::vector<std::string> ret = m;

        for(int w = 0; !done && w <= 1; w++){
            bool possible(true);
            for(long row = 0; possible && row < nr; row++){
                for(long col = 0; possible && col < nc; col++){
                    int par = (row + col) % 2;
                    ret[row][col] = (par == w ? 'R' : 'W');
                    if(m[row][col] == '.'){continue;}
                    if(ret[row][col] != m[row][col]){possible = false;}
                }
            }

            if(possible){done = true; break;}            
        }

        if(done){
            std::cout << "YES" << std::endl;
            for(long row = 0; row < nr; row++){std::cout << ret[row] << std::endl;}
        }
        else{std::cout << "NO" << std::endl;}
    }

}
