#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    const long M = 1e7;

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; p++){std::cin >> v[p].first; v[p].second = p;}
        std::string s; std::cin >> s;
        for(long p = 0; p < n; p++){v[p].first += M * (s[p] - '0');}
        sort(v.begin(), v.end());
        std::vector<long> w(n, 0);
        for(long p = 0; p < n; p++){w[v[p].second] = p + 1;}
        for(long p = 0; p < n; p++){std::cout << w[p] << " ";}
        std::cout << std::endl;
    }

}
