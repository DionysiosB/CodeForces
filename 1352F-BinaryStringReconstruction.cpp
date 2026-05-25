#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long a, b, c; std::cin >> a >> b >> c;
        if(b == 0){std::cout << std::string((a ? a : c) + 1, '0' + (c > 0));}
        else{
            std::string res("");
            for(long p = 0; p < (b + 1); p++){res += (p & 1) ? "0" : "1";}
            res.insert(1, std::string(a, '0'));
            res.insert(0, std::string(c, '1'));
            std::cout << res;
        }

        std::cout << std::endl;
    }

    return 0;
}
