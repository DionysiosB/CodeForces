#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;

        long last(-s.size() - 1), cnt(0);
        for(long p = 0; p < n; p++){
            if(s[p] == '0'){continue;}
            if(last + k <= p){++cnt;}
            last = p;
        }

        std::cout << cnt << std::endl;
    }

}
