#include<iostream>

int main(){

    long t; std::cin>>t;
    while(t--){
        long n, m; std::cin >> n >> m;

        for(long row = 1; row <= n; row++){
            for(long col = 1; col <= m; col++){
                if(  (row == 1 || row == n) && (col & 1) && col + 2 <= m || (row & 1) && (col == 1 || col == m) && row + 2 <= n || col == m && row & 1){std::cout << 1;}
                else{std::cout << 0;}
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}

