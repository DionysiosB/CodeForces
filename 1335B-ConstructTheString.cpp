#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, a, b; std::cin >> n >> a >> b;
        std::string s(n, 'a');
        for(long p = 0; p < n; p++){s[p] = 'a' + (p % b);}
        std::cout << s << std::endl;
    }

    return 0;
}
