#include <iostream>
#include <vector>

int main(){

    long n, m; std::cin >> n >> m;
    std::vector<long> seat(4 * n, 0);
    long current(1);
    for(long p = 1; p <= m; p++){
        seat[current] = p;
        current += 2;
        if(current > 4 * n){current %= 4 * n; --current;}
    }

    for(long p = 0; p < 4 * n; p++){
        if(seat[p] <= 0){continue;}
        std::cout << seat[p] << " ";
    }; 
    std::cout << std::endl;

    return 0;
}
