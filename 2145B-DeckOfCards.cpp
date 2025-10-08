#include <iostream>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        long a = std::count(s.begin(), s.end(), '0'); 
        long b = std::count(s.begin(), s.end(), '1'); 
        long c = std::count(s.begin(), s.end(), '2'); 

        std::string w(n, '+');
        for(long p = 0; p < n; p++){
            if(p < a + c || p + b + c >= n){w[p] = '?';}
            if(p < a || p + b >= n || k == n){w[p] = '-';}
        }
        std::cout << w << std::endl;
    }

}
