#include<iostream>
#include<cmath>

int main(){

    uint64_t m, n; std::cin >> n >> m;
    m = std::min(n ,m);
    uint64_t t = sqrt(2 *(n - m));
    if(t * (t + 1) < 2 * (n - m)){++t;}
    std::cout << m + t << std::endl;

    return 0;
}
