#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, m, r, c; std::cin >> n >> m >> r >> c;
        --r; --c;
        bool possible(false); long res(2);
        for(long row = 0; row < n; row++){
            std::string s; std::cin >> s;
            for(long col = 0; col < s.size(); col++){
                if(s[col] == 'W'){continue;}
                possible = true;
                if(row == r && col == c){res = 0;}
                if(row == r || col == c){res = (res < 1) ? res : 1;}
            }
        }

        if(!possible){std::cout << (-1) << std::endl;}
        else{std::cout << res << std::endl;}
    }

}
