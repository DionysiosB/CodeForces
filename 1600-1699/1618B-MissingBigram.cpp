#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        bool missing(true);
        std::string res; std::cin >> res;
        for(long p = 1; p < n - 2; p++){
            std::string x; std::cin >> x; 
            if(res.back() == x[0]){res = res + x[1];}
            else{missing = false; res = res + x;}
        }
        
        if(missing){res += 'a';}
        std::cout << res << std::endl;
    }

}
