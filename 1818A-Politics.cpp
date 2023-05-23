#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::vector<bool> stay(n, 1);
        std::vector<std::string> gn(n);
        for(long p = 0; p < n; p++){std::cin >> gn[p];}
        for(long p = 1; p < n; p++){
            for(long q = 0; q < k; q++){
                if(gn[p][q] != gn[0][q]){stay[p] = 0;}
            }
        }

        long res(1); for(long p = 1; p < n; p++){res += stay[p];}
        std::cout << res << std::endl;
    }

}
