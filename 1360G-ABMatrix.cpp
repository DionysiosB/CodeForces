#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, m, a, b; std::cin >> n >> m >> a >> b;
        if(n * a != m * b){std::cout << "NO" << std::endl; continue;}

        std::cout << "YES" << std::endl;
        std::string s(m, '0');
        for(long p = 0; p < a; p++){s[p] = '1';}
        
        long shift(1); for(long p = 1; p < m; p++){if((p * n) % m == 0){shift = p; break;}}

        for(long row = 0; row < n; row++){
            std::cout << s << std::endl;
            std::string prev = s;
            for(long p = 0; p < s.size(); p++){s[p] = prev[(s.size() + p - shift) % s.size()];}
        }

    }

    return 0;
}
