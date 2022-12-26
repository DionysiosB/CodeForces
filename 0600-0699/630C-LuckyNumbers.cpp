#include <iostream>

int main(){

    int n; std::cin >> n;
    int64_t res(1);
    for(int p = 0; p <= n; p++){res *= 2;}
    res -= 2;
    std::cout << res << std::endl;

    return 0;
}
