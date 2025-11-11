#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        long mn(1e9 + 7), mx(-1), wmn(1), wmx(1);
        for(long p = 1; p <= n; p++){
            long x; std::cin >> x;
            if(x < mn){mn = x; wmn = p;}
            if(x > mx){mx = x; wmx = p;}
        }

        std::string s; std::cin >> s;
        if(s[0] == '1' || s.back() == '1' || s[wmn - 1] == '1' || s[wmx - 1] == '1'){std::cout << -1 << std::endl; continue;}

        std::cout << 5 << std::endl;
        std::cout << 1 << " " << wmn << std::endl;
        std::cout << 1 << " " << wmx << std::endl;
        std::cout << wmn << " " << n << std::endl;
        std::cout << wmx << " " << n << std::endl;
        std::cout << (wmn < wmx ? wmn : wmx) << " " << (wmn > wmx ? wmn : wmx) << std::endl;
    }

}
