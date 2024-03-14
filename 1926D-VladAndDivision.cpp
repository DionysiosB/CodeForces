#include <iostream>
#include <map>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::map<uint32_t, uint32_t> m;
        long cnt(0);

        for(long p = 0; p < n; p++){
            uint32_t x; std::cin >> x;
            uint32_t y = ~x - (1 << 31);
            if(m.count(y) && m[y] > 0){--m[y];}
            else{++cnt; ++m[x];}
        }

        std::cout << cnt << std::endl;
    }

}
