#include <iostream>

int main(){

    int n, k; std::cin >> n >> k;
    int b = n * (k - 1);

    long total = n * (b + 1) + (n - k + 1) * n * (n - 1) / 2;
    std::cout << total << std::endl;

    for(int row = 0; row < n; row++){
        for(int col = 1; col <= n; col++){
            if(col < k){std::cout << (row * (k - 1) + col) << " ";}
            else{std::cout << (b + row * (n - k + 1) + (col - k + 1)) << " ";}
        }
        std::cout << std::endl;
    }

    return 0;
}
