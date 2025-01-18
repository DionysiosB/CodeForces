#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<long> v(n);
        for(long p = 0; p < n; p++){
            std::string s; std::cin >> s;
            long dist(0);
            for(long u = 0; u < s.size(); u++){
                dist += (s[u] == '0') * (u < p) + (s[u] == '1') * (u > p);
            }
            v[n - 1 - dist] = p + 1;
        }

        for(long p = 0; p < n; p++){printf("%ld ", v[p]);}
        puts("");
    }

}
