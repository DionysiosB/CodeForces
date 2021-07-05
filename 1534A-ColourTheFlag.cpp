#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long nr, nc; std::cin >> nr >> nc;
        std::vector<std::string> m(nr);
        for(long p = 0; p < nr; p++){std::cin >> m[p];}


        long red(-1), white(-1);
        bool possible(true);
        for(long row = 0; possible && row < nr; row++){
            for(long col = 0; possible && col < nc; col++){
                char cur = m[row][col];
                if(cur == '.'){continue;}
                long par = (row + col) % 2;
                if(cur == 'R'){
                    if(red < 0){red = par; white = 1 - par;}
                    else if(red >= 0 && red != par){possible = false;}
                    if(red >= 0 && red == white){possible = false;}
                }
                else if(cur == 'W'){
                    if(white < 0){white = par; red = 1 - par;}
                    else if(white >= 0 && white != par){possible = false;}
                    if(white >= 0 && white == red){possible = false;}
                }
            }
        }

        //if(white == red){possible = false;}
        if(!possible){std::cout << "NO" << std::endl; continue;}

        if(red < 0 && white < 0){red = 0; white = 1;}
        else if(red < 0){red = 1 - white;}
        else if(white < 0){white = 1 - red;}

        for(long row = 0; row < nr; row++){
            for(long col = 0; col < nc; col++){
                if(m[row][col] != '.'){continue;}
                long par = (row + col) % 2;
                if(par == red){m[row][col] = 'R';}
                else if(par == white){m[row][col] = 'W';}
            }
        }

        std::cout << "YES" << std::endl;
        for(long row = 0; row < nr; row++){std::cout << m[row] << std::endl;}
    }

}
