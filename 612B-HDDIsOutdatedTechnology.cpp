#include <iostream>
#include <vector>

int main(){

    long n; std::cin >> n;
    std::vector<long> f(n + 1);
    for(long p = 1; p <= n; p++){
        long x; std::cin >> x;
        f[x] = p;
    }

    int64_t total(0);
    for(long p = 1; p < n; p++){
        long diff = f[p + 1] - f[p];
        if(diff < 0){diff = -diff;}
        total += diff;
    }

    std::cout << total << std::endl;

    return 0;
}
