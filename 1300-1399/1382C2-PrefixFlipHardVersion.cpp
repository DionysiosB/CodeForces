#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a; std::cin >> a;
        std::string b; std::cin >> b;

        std::vector<long> moves;
        bool one(a[0] == '1');
        for(long p = 1; p < a.size(); p++){
            if(a[p - 1] == a[p]){continue;}
            moves.push_back(p); one = !one;
        }

        for(long p = b.size() - 1; p >= 0; p--){
            if(b[p] == '0' + one){continue;}
            moves.push_back(p + 1); one = !one;
        }

        std::cout << moves.size() << " ";
        for(long p = 0; p < moves.size(); p++){std::cout << moves[p] << " ";}
        std::cout << std::endl;
    }

    return 0;
}
