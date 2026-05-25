#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t; 
    while(t--){
        long n; std::cin >> n;
        std::string a; std::cin >> a;
        std::string b; std::cin >> b;

        std::vector<long> moves;
        for(long p = 0; p < a.size(); p++){
            if(a[p] == b[p]){continue;}
            moves.push_back(p + 1);
            moves.push_back(1);
            moves.push_back(p + 1);
        }

        std::cout << moves.size() << " ";
        for(long p = 0; p < moves.size(); p++){std::cout << moves[p] << " ";}
        std::cout << std::endl;
    }

    return 0;
}
