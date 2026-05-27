#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long target; std::cin >> target;
        
        long total(0); std::vector<std::pair<long, long> > w(s.size());
        for(long p = 0; p < s.size(); p++){
            w[p] = std::make_pair(s[p] - 'a' + 1, p);
            total += w[p].first;
        }
        sort(w.rbegin(), w.rend());

        std::vector<bool> v(s.size(), 1);
        for(long p = 0; (target < total) && p < s.size(); p++){
            total -= w[p].first;
            v[w[p].second] = 0;
        }

        for(long p = 0; p < s.size(); p++){
            if(!v[p]){continue;}
            std::cout << s[p];
        }

        std::cout << std::endl;
    }

}
