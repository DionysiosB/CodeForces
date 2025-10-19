#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::vector<long> v;
        for(long p = 0; p < s.size(); p++){if(s[p] == '0'){v.push_back(p + 1);}}
        std::cout << v.size() << std::endl;
        if(v.empty()){continue;}
        for(long p = 0; p < v.size(); p++){std::cout << v[p] << " ";}
        std::cout << std::endl;
    }

}
