#include <iostream>

int main(){
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::string x; std::cin >> x;
        std::string s; std::cin >> s;
        int cnt(-1);
        for(long p = 0; p <= 6; p++){
            if(x.find(s) != std::string::npos){cnt = p; break;}
            x = x + x;
        }

        std::cout << cnt << std::endl;
    }

}
