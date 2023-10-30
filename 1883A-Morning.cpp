#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        std::string x; std::cin >> x;
        int prev(1), cnt(0);
        for(long p = 0; p < x.size(); p++){
            int cur = x[p] - '0';
            if(cur == 0){cur = 10;}
            int dist = cur - prev; if(dist < 0){dist = -dist;}
            cnt += dist + 1;
            prev = cur;
        }

        std::cout << cnt << std::endl;
    }

}
