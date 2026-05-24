#include <iostream>
#include <vector>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);

    long n; std::cin >> n;
    std::set<long> pearls;
    std::vector<long> sep;


    for(long p = 1; p <= n; p++){
        long x; std::cin >> x; 
        if(pearls.count(x) > 0){pearls.clear(); sep.push_back(p);}
        else{pearls.insert(x);}
    }

    if(sep.size() <= 0){std::cout << "-1" << std::endl;}
    else{
        std::cout << sep.size() << std::endl;
        long start = 1;
        for(int p = 0; p < sep.size() - 1; p++){
            std::cout << start << " " << sep[p] << std::endl;
            start = sep[p] + 1;
        }
        std::cout << start << " " << n << std::endl;
    }

    return 0;
}
