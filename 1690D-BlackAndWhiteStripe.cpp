#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        std::vector<long> v(n, 0);
        for(long p = 0; p < n; p++){v[p] = (s[p] == 'W') + (p > 0 ? v[p - 1] : 0);}
        long res(v[k - 1]);
        for(long p = k; p < n; p++){
            long cur = v[p] - v[p - k];
            res = (res < cur) ? res : cur;
        }

        std::cout << res << std::endl;
    }

}
