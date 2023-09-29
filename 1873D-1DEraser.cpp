#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        long cnt(0), idx(0);
        while(idx < s.size()){
            if(s[idx] == 'B'){++cnt; idx += k;}
            else{++idx;}
        }

        std::cout << cnt << std::endl;
    }

}
