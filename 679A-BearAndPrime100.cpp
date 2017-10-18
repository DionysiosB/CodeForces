#include <iostream>
#include <vector>

int main(){
    
    //Primes
    std::vector<int> primes;
    primes.push_back(2); primes.push_back(3); primes.push_back(5); primes.push_back(7);
    primes.push_back(11); primes.push_back(13); primes.push_back(17); primes.push_back(19);
    primes.push_back(23); primes.push_back(29); primes.push_back(31); primes.push_back(37);
    primes.push_back(41); primes.push_back(43); primes.push_back(47);

    //Prime Squares
    std::vector<int> primesq;
    primesq.push_back(4); primesq.push_back(9); primesq.push_back(25); primesq.push_back(49);

    bool found(0);

    for(int p = 0; p < primesq.size(); p++){
        if(found){break;}
        std::cout << primesq[p] << std::endl;
        std::string ans; std::cin >> ans;
        if(ans == "yes"){found = 1;}
    }

    int ind(0);
    for(int p = 0; p < primes.size(); p++){
        if(found){break;}
        std::cout << primes[p] << std::endl;
        std::string ans; std::cin >> ans;
        if(ans == "yes"){++ind;}
        if(ind >= 2){found = 1;}
    }

    std::cout << (found ? "composite" : "prime") << std::endl;
    fflush(stdout);

    return 0;
}
