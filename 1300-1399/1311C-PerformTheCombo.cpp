#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    const long N = 26;
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::string s; std::cin >> s;
        std::vector<long> v(s.size(), 0); for(long p = 0; p < m; p++){long x; std::cin >> x; ++v[x - 1];}
        std::vector<long> times(s.size(), 0); times[s.size() - 1] = 1;
        for(long p = s.size() - 2; p >= 0; p--){times[p] = times[p + 1] + v[p];}
        std::vector<long> cnt(N, 0);
        for(long p = 0; p < s.size(); p++){cnt[s[p] - 'a'] += times[p];}
        for(long p = 0; p < N; p++){std::cout << cnt[p] << " ";}; std::cout << std::endl;
    }

    return 0;
}
