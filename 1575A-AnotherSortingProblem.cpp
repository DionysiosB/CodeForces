#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m;
    std::vector<std::pair<std::string, long> > v(n);
    for(long p = 0; p < n; p++){
        std::string s; std::cin >> s;
        for(long u = 1; u < s.size(); u += 2){s[u] = 'A' + ('Z' - s[u]);}
        v[p].first  = s;
        v[p].second = p + 1;
    }

    sort(v.begin(), v.end());
    for(long p = 0; p < n; p++){std::cout << v[p].second << " ";}
    std::cout << std::endl;
}
