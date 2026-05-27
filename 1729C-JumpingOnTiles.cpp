#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<std::vector<long> > v(26);
        for(long p = 0; p < s.size(); p++){v[s[p] - 'a'].push_back(p + 1);}
        int step = s[0] < s.back() ? 1 : -1;
        std::vector<long> seq;
        for(long p = (s[0] - 'a'); p != (s.back() - 'a') + step; p += step){
            for(long q = 0; q < v[p].size(); q++){seq.push_back(v[p][q]);}
        }

        std::cout << (step * (s.back() - s[0])) << " " << seq.size() << std::endl;
        for(long p = 0; p < seq.size(); p++){std::cout << seq[p] << " ";}
        std::cout << std::endl;
    }

}
