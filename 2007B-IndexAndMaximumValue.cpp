#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        long x(0);
        for(long p = 0; p < n; p++){long a; std::cin >> a; x = (a > x ? a : x);}
        while(m--){
            char c; long l, r; std::cin >> c >> l >> r;
            if(l <= x && x <= r){x += (c == '+') - (c == '-');}
            std::cout << x << " ";
        }

        std::cout << std::endl;
    }
}
