#include <iostream>

int main(){
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string x, y; std::cin >> x >> y;
        long minus(0), plus(0);
        for(long p = 0; p < x.size(); p++){
            if(x[p] == '1' && y[p] == '0'){++plus;}
            else if(x[p] == '0' && y[p] == '1'){++minus;}
        }

        std::cout << (plus > minus ? plus : minus) << std::endl;
    }

}
