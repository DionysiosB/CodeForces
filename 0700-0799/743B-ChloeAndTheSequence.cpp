#include <iostream>

int main(){

    const int64_t B = 100;
    int64_t n, k; std::cin >> n >> k;

    --k;
    int64_t mod(2), rem(0), res(1);
    while(res < B){
        if(k % mod == rem){std::cout << res << std::endl; break;}
        mod *= 2; rem = 2 * rem + 1; ++res;
    }

    return 0;
}
