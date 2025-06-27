#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;

    std::vector<long> v;
    long idx(s.size());
    for(long p = 0; p < s.size(); p++){
        if(s[p] == ')'){continue;}
        while(idx > p){
            if(s[idx] == ')'){v.push_back(1 + p); v.push_back(1 + idx--); break;}
            --idx;
        }
    }

    sort(v.begin(), v.end());
    if(v.empty()){std::cout << "0" << std::endl;}
    else{
        std::cout << 1 << std::endl << v.size() << std::endl;
        for(long p = 0; p < v.size(); p++){std::cout << v[p] << " ";}
        std::cout << std::endl;
    }
    
}
