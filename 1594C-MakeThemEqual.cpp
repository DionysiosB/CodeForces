#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; char c; std::cin >> n >> c;
        std::string s; std::cin >> s;

        long res(0), last(- 1);
        bool same(true);
        for(long p = s.size() - 1; p >= 0; p--){
            if(s[p] != c){same = false;}
            else if(last < 0){last = p + 1;}
        }


        if(same){std::cout << "0" << std::endl;}
        else if(2 * last > n){std::cout << "1\n" << last << std::endl;}
        else{std::cout << "2\n" << (n - 1) << " " << n << std::endl;}
    }

}
