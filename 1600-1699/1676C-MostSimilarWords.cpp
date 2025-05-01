#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::vector<std::string> v(n);
        for(long p = 0; p < n; p++){std::cin >> v[p];}

        long mn(1e9);
        for(long p = 0; p < n; p++){
            for(long q = p + 1; q < n; q++){
                long dist(0);
                for(long u = 0; u < m; u++){
                    long x = v[p][u] - v[q][u];
                    dist += (x < 0 ? -x : x);
                }

                mn = (dist < mn) ? dist : mn;
            }
        }

        std::cout << mn << std::endl;
    }
}
