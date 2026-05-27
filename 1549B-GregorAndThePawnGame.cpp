#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string b, w; std::cin >> b >> w;
        long cnt(0);
        for(long p = 0; p < n; p++){
            if(w[p] == '0'){continue;}

            if(p > 0 && b[p - 1] == '1'){b[p - 1] = 'x'; ++cnt;}
            else if(b[p] == '0'){b[p] = 'x'; ++cnt;}
            else if(p + 1 < n && b[p + 1] == '1'){b[p + 1] = 'x'; ++cnt;}
        }

        std::cout << cnt << std::endl;
    }

}
