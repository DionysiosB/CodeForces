#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s(200, 'a');
        std::cout << s << std::endl;
        for(long p = 0; p < n; p++){
            long pos(0); std::cin >> pos;
            s[pos] = (s[pos] == 'a') ? 'b' : 'a';
            std::cout << s << std::endl;
        }
    }

    return 0;
}
