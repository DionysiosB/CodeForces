#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::string s(m, 'B');
        for(long p = 0; p < n; p++){
            long x; std::cin >> x; --x;
            long y = m - 1 -x ;
            long left = (x < y) ? x : y;
            if(s[left] == 'B'){s[left] = 'A';}
            else{s[m - 1 - left] = 'A';}
        }

        std::cout << s << std::endl;
    }

}
