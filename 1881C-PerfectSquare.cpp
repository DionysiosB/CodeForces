#include <iostream>
#include <vector>

int main(){
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::string> m(n);
        for(long row = 0; row < n; row++){std::cin >> m[row];}

        long cnt(0);
        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){
                char w = m[row][col];
                char x = m[col][n - 1 - row];
                char y = m[n - 1 - row][n - 1 - col];
                char z = m[n - 1 - col][row];

                char f(w > x ? w : x);
                f = (f > y ? f : y);
                f = (f > z ? f : z);

                m[row][col] = m[col][n - 1 - row] = m[n - 1 - row][n - 1 - col] = m[n - 1 - col][row] = f;
                cnt += (f - w) + (f - x) + (f - y) + (f - z);
            }
        }

        std::cout << cnt << std::endl;

    }

}
