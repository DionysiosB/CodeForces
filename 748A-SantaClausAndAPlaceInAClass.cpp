#include <iostream>

int main(){

    long n, m, k; std::cin >> n >> m >> k;
    --k;
    long col = k / (2 * m);
    long row = (k % (2 * m)) / 2;
    char side = (k % 2) ? 'R' : 'L';
    std::cout << (1 + col) << " " << (1 + row) << " " << side << std::endl;

    return 0;
}
