#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long a(-1), b(0), cnt(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '0'){continue;}
            if(a < 0){a = p;}
            b = p;
            ++cnt;
        }

        std::cout << (cnt == 2 ? 1 : (b - a)) << std::endl;
    }

}
