#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        long x(0);
        for(long p = 0; p < n; p++){
            std::string s; std::cin >> s;
            if(s.size() <= m){x = p + 1; m -= s.size();}
            else{m = 0;}
        }

        std::cout << x << std::endl;
    }

}
