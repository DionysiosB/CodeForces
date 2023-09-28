#include <iostream>
#include <vector>

int main(){

    const int B = 10;
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::vector<std::string> m(B);
        for(long p = 0; p < B; p++){std::cin >> m[p];}

        long total(0);
        for(long row = 0; row < B; row++){
            for(long col = 0; col < B; col++){
                if(m[row][col] == '.'){continue;}
                long xrow = (row < B - 1 - row) ? row : (B - 1 - row);
                long xcol = (col < B - 1 - col) ? col : (B - 1 - col);
                long score = 1 + (xrow < xcol ? xrow : xcol);
                total += score;
            }
        }
        
        printf("%ld\n", total);
    }

}
