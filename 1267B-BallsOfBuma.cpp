#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    std::string s; std::cin >> s;
    std::vector<char> v; std::vector<long> w;

    long cnt(0);
    for(long p = 0; p <= s.size(); p++){
        if(p == s.size()){v.push_back(s.back()); w.push_back(cnt); break;}
        if(!p || (s[p - 1] == s[p])){++cnt;}
        else{v.push_back(s[p - 1]); w.push_back(cnt); cnt = 1;}
    }

    long ans = w[w.size() / 2] + 1;
    bool possible((v.size() % 2) && (v[v.size() / 2] > 1));
    for(long p = 0; possible && p < v.size(); p++){
        if(v[p] != v[v.size() - 1 - p]){possible = false;}
        if(w[p] + w[w.size() - 1 - p] < 3){possible = false;}
    }

    std::cout << (possible ? ans : 0) << std::endl;

    return 0;
}
