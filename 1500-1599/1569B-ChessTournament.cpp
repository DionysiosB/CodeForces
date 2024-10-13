#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        std::vector<long> next(n); long idx(-1), first(-1); long twos(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] != '2'){continue;}
            ++twos;
            if(idx < 0){idx = p; first = p;}
            else{next[idx] = p; idx = p;}
        }
        if(first >= 0){next[idx] = first;}

        if(twos == 1 || twos == 2){std::cout << "NO" << std::endl; continue;}

        std::vector<std::string> res(n, std::string(n, ' '));
        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){
                char cur('=');
                if(row == col){cur = 'X';}
                else if(s[row] == '2' && s[col] == '2' && next[row] == col){cur = '+';}
                else if(s[row] == '2' && s[col] == '2' && next[col] == row){cur = '-';}
                res[row][col] = cur;
            }
        }


        std::cout << "YES" << std::endl;
        for(long p = 0; p < n; p++){std::cout << res[p] << std::endl;}
    }

}
