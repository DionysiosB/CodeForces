#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<std::string> table(n);
    for(long p = 0; p < n; p++){getline(std::cin, table[p]);}

    bool possible(1);
    std::vector<std::vector<long> > dist(n, std::vector<long>(m, 0));
    for(long row = 0; row < n; row++){
        if(!possible){break;}

        long before = -1;
        for(long col = m - 1; col >= 0; col--){if(table[row][col] == '1'){before = col; break;}}
        if(before < 0){possible = 0; break;}
        for(long col = 0; col < m; col++){
            if(table[row][col] == '1'){before = col;}
            dist[row][col] = col - before; if(dist[row][col] < 0){dist[row][col] += m;}
        }
    
        long after = -1;
        for(long col = 0 ; col < m; col++){if(table[row][col] == '1'){after = col; break;}}
        if(after < 0){possible = 0; break;}   //This line should be redundant;
        for(long col = m - 1; col >= 0; col--){
            if(table[row][col] == '1'){after = col;}
            long candidate = after - col; if(candidate < 0){candidate += m;}
            if(candidate < dist[row][col]){dist[row][col] = candidate;}
        }
    }

    long total = 1E8;
    for(long col = 0; col < m; col++){
        long test = 0;
        for(long row = 0; row < n; row++){test += dist[row][col];}
        if(test < total){total = test;}
    }

    if(possible){std::cout << total << std::endl;}
    else{puts("-1");}

    return 0;
}
