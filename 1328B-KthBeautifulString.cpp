#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s(n, 'a');
        long pos(0); while(pos < k){k -= pos; ++pos;}
        s[(n - 1) - pos] = 'b'; s[(n - 1) - (k - 1)] = 'b';
        std::cout << s << std::endl;
    }

    return 0;
}
