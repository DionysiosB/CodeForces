#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        if(k % 2){for(char &x : s){x = (x == '0' ? '1' : '0');}}

        std::vector<long> v(n, 0);
        for(long p = 0; k && p < n; p++){
            if(s[p] == '1'){continue;}
            v[p] = 1; s[p] = '1'; --k;
        }

        if(k){
            if(k % 2){s.back() = '0';}
            v.back() += k;
        }

        std::cout << s << std::endl;
        for(long x : v){std::cout << x << " ";}
        std::cout << std::endl;
    }

}
