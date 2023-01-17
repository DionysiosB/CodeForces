#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<long> v;
        for(long p = 0; p < s.size(); p++){if(s[p] == '*'){v.push_back(p);}}
        long vs(v.size()); long med = (v[(vs - 1) / 2] + v[vs / 2]) / 2;
        long long cnt(0);
        long cur(0);
        for(long p = med; p >= 0; p){
            if(s[p] == '.'){;}
            

        }
    }

}
