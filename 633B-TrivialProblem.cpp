#include <iostream>
#include <vector>

int main(){

    const int M = 100000;
    int m; std::cin >> m;

    std::vector<long> res;
    long n(0); long f(0);
    while(f <= m){
        long x = ++n;
        f = 0; while(x > 0){f += (x/5); x /= 5;}
        if(f == m){res.push_back(n);}
    }

    std::cout << res.size() << std::endl;
    for(int p = 0; p < res.size(); p++){std::cout << res[p] << " ";}
    std::cout << std::endl;

    return 0;
}
