#include <cstdio>
#include <iostream>
#include <iostream>


int main(){

    long long n; std::cin >> n;
    long long total(0);
    for(long p = 0; p < n; p++){
        long long m; std::cin >> m;
        total += (m - 1) * (p + 1) + 1;
    }

    std::cout << total << std::endl;

    return 0;
}
