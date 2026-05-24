#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<long> start;
    for(int p = 0; p < n; p++){
        long x; std::cin >> x; 
        if(x == 0){continue;}
        start.push_back(x);
    }

    std::vector<long> target;
    long ind(0);
    for(int p = 0; p < n; p++){
        long x; std::cin >> x; 
        if(x == 0){continue;}
        target.push_back(x);
        if(x == start[0]){ind = target.size() - 1;}
    }

    bool possible(true);
    for(int p = 0; p < n - 1; p++){
        if(start[p] != target[(p + ind) % (n - 1)]){possible = false; break;}
    }

    puts(possible ? "YES" : "NO");

    return 0;
}
