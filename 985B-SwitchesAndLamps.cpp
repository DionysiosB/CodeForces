#include <iostream>
#include <vector>
#include <set>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::string> g(n); for(long p = 0; p < n; p++){std::cin >> g[p];}
    std::vector<long> v(m, 0);
    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){v[col] += (g[row][col] == '1');}
    }

    bool possible(0);
    for(long row = 0; row < n; row++){
        bool rem(true);
        for(long col = 0; col < m; col++){
            if(g[row][col] == '1' && v[col] <= 1){rem = false; break;}
        }
        if(rem){possible = true; break;}
    }

    puts(possible ? "YES" : "NO");

    return 0;
}
