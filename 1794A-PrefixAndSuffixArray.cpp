#include <iostream>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string x(""), y("");
        for(long p = 0; p < 2 * n - 2; p++){
            std::string cur; std::cin >> cur;
            if(cur.size() == n - 1){
                if(x.size() == 0){x = cur;}
                else{y = cur;}
            }
        }

        std::reverse(x.begin(), x.end());
        std::cout << (x == y ? "YES" : "NO") << std::endl;
    }

}
