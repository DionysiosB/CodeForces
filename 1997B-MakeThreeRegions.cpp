#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::string> v(2); std::cin >> v[0] >> v[1];

        long cnt(0);
        for(long col = 1; col + 1 < v[0].size(); col++){
            for(long row = 0; row < 2; row++){
                if(v[row][col - 1] == 'x' || v[row][col] == 'x' || v[row][col + 1] == 'x'){continue;}
                if(v[1 - row][col] == 'x'){continue;}
                if(v[1 - row][col - 1] == '.' || v[1 - row][col + 1] == '.'){continue;}
                ++cnt;
            }
        }

        std::cout << cnt << std::endl;
    }

}
