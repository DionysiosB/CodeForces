#include <iostream>
#include <vector>

int main(){

    std::vector<std::string> g(6); 
    g[0] = "Power"; g[1] = "Time"; g[2] = "Space"; g[3] = "Soul"; g[4] = "Reality"; g[5] = "Mind";

    std::vector<std::string> h(6); 
    h[0] = "purple"; h[1] = "green"; h[2] = "blue"; h[3] = "orange"; h[4] = "red"; h[5] = "yellow";


    std::vector<bool> a(6, 1);

    long n; std::cin >> n;
    for(long p = 0; p < n; p++){
        std::string x; std::cin >> x;
        for(long u = 0; u < 6; u++){if(x == h[u]){a[u] = 0;}}
    }

    std::cout << (6 - n) << std::endl;
    for(long p = 0; p < 6; p++){if(a[p]){std::cout << g[p] << std::endl;}}

    return 0;
}
