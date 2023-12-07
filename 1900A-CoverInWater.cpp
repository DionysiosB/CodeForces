#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        s.push_back('#');
        bool two(false); long prev(-1), cnt(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '.'){++cnt; continue;}
            long diff = p - prev - 1;
            if(diff > 2){two = true;}
            prev = p;
        }

        if(two){cnt = 2;}
        std::cout << cnt << std::endl;
    }


}
