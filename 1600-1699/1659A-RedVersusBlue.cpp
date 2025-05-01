#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, r, b; std::cin >> n >> r >> b;
        long d = r / (b + 1);
        long m = r % (b + 1);

        for(long p = 0; p <= b; p++){
            for(long u = 0; u < d + (p < m); u++){std::cout << "R";}
            if(p < b){std::cout << "B";}
        }

        std::cout << std::endl;
    }
}
