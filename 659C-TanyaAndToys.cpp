#include <iostream>
#include <set>
#include <vector>

int main(){

    const long N = 1000000000;

    long n, m; std::cin >> n >> m;
    std::set<long> existing;
    for(long p = 0; p < n; p++){long x; std::cin >> x; existing.insert(x);}

    std::vector<long> tobuy;
    for(long p = 1; p <= N; p++){
        if(existing.count(p) > 0){continue;}
        if(p <= m){tobuy.push_back(p); m -= p;}
        else{break;}
    }

    std::cout << tobuy.size() << std::endl;
    for(long p = 0; p < tobuy.size(); p++){std::cout << tobuy[p] << " ";}
    std::cout << std::endl;

    return 0;
}
