#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::vector<std::vector<long> > a(n, std::vector<long>(m, 0));
        for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){std::cin >> a[row][col];}}
        bool possible(true);
        for(long row = 0; row < n; row++){
            if(!possible){break;}
            for(long col = 0; col < m; col++){
                long d = (row > 0) + (col > 0) + (row + 1 < n) + (col + 1 < m);
                if(a[row][col] > d){possible = false; break;}
                else{a[row][col] = d;}
            }
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
        if(possible){for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){std::cout << a[row][col] << " ";}; std::cout << std::endl;};}
    }

    return 0;
}
