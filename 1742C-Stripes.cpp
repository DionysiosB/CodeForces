#include <iostream>
#include <vector>

int main(){

    const int N = 8;

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    
    while(t--){

        std::vector<std::string> v(N);
        for(long p = 0; p < N; p++){std::cin >> v[p];}
        char ans('.');

        for(long row = 0; ans == '.' && row < N; row++){
            bool test(true);
            for(long col = 0; test && col < N; col++){if(v[row][col] != 'R'){test = false;}}
            if(test){ans = 'R';}
        }

        for(long col = 0; ans == '.' && col < N; col++){
            bool test(true);
            for(long row = 0; test && row < N; row++){if(v[row][col] != 'B'){test = false;}}
            if(test){ans = 'B';}
        }


        std::cout << ans << std::endl;
    }

}
