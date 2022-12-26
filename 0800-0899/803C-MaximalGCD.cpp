#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int64_t n, k; std::cin >> n >> k;
    int64_t s = k * (k + 1) / 2;
    if((k + 1) > (2 * n / k)){puts("-1"); return 0;}  //Avoid overflow

    int64_t g(0);
    for(long long p = 1; p * p <= n; p++){
        if(n % p != 0){continue;}
        int64_t t = p;
        if((t > g) && (t <= n / s)){g = t;}
        t = (n / p);
        if((t > g) && t <= (n / s)){g = t;}
    }

    for(int64_t p = 1; p < k; p++){std::cout << (p * g) << " ";}
    std::cout << (k * g + (n - g * s)) << std::endl;

    return 0;
}
