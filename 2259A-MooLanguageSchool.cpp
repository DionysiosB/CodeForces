#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 0; p < (n / k); p++){
            bool z(false);
            for(long q = 0; !z && q < k; q++){if(s[k * p + q] == '0'){z = true;}}
            cnt += !z;
        }

        std::cout << cnt << std::endl;
    }

}
