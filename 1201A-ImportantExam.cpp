#include <iostream>
#include <vector>

int main(){
    
    long n, m; std::cin >> n >> m;
    std::vector<std::string> w(n);
    for(long p = 0; p < n; p++){std::cin >> w[p];}
    std::vector<long> a(m); for(long p = 0; p < m; p++){std::cin >> a[p];}
    
    long total(0);
    for(long p = 0; p < m; p++){
        std::vector<long> s(5, 0);
        for(long u = 0; u < n; u++){++s[w[u][p] - 'A'];}
        long mx(0);
        for(long u = 0; u < s.size(); u++){mx = (mx > s[u]) ? mx : s[u];}
        total += a[p] * mx;
    }
    
    std::cout << total << std::endl;
    
    return 0;
}
