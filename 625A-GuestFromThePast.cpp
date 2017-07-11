#include <iostream>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    int64_t n; std::cin >> n;
    int64_t a, b, c; std::cin >> a >> b >> c;
    
    if(a < b - c){std::cout << (n / a) << std::endl;}
    else{

        int64_t x = (n - c) / (b - c);
        if(x < 0){x = 0;}
        int64_t rem = n - x * (b - c);
        x += (rem / a);
        std::cout << x << std::endl;
    }

    return 0;
}
