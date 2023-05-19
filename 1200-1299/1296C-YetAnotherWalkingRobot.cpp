#include <iostream>
#include <map>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::map<std::pair<long, long>, long> m;
        long x(0), y(0); m[std::make_pair(0, 0)] = 0;
        long start(0), stop(0), len(1e9);
        for(long p = 0; p < s.size(); p++){
            x += ((s[p] == 'R') - (s[p] == 'L'));
            y += ((s[p] == 'U') - (s[p] == 'D'));
            std::pair<long, long> pos = std::make_pair(x, y);
            if(m.count(pos)){
                long dist = (p + 1) - m[pos];
                if(dist < len){len = dist; start = m[pos] + 1; stop = p + 1;}
            }
            
            m[pos] = p + 1;
        }

        if(start && stop){std::cout << start << " " << stop << std::endl;}
        else{std::cout << "-1" << std::endl;}
    }

    return 0;
}
