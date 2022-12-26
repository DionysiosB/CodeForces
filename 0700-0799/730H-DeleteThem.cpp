#include <iostream>
#include <vector>
#include <set>


bool checkPattern(std::string test, std::string pat){
    if(test.size() != pat.size()){return false;}
    for(int p = 0; p < pat.size(); p++){
        if(pat[p] == '?'){continue;}
        if(pat[p] != test[p]){return false;}
    }

    return true;
}


std::string updatePattern(std::string s, std::string pattern){
    if(pattern.size() == 0){return s;}
    if(pattern.size() != s.size()){return "";}
    for(int p = 0; p < pattern.size(); p++){if(pattern[p] != '?' && pattern[p] != s[p]){pattern[p] = '?';}}
    return pattern;
}


int main(){

    std::ios_base::sync_with_stdio(false);
    int n, m; std::cin >> n >> m;
    std::vector<std::string> v(n + 1);
    for(int p = 1; p <= n; p++){std::cin >> v[p];}

    std::set<int> delIndices;
    std::vector<std::string> del;
    std::string pattern("");
    bool possible(true);

    for(int p = 0; p < m; p++){
        int x; std::cin >> x;
        delIndices.insert(x);
        pattern = updatePattern(v[x], pattern);
        if(pattern.size() <= 0){possible = false;}
    }

    for(int p = 1; p <= n; p++){
        if(delIndices.count(p) > 0){continue;}
        if(checkPattern(v[p], pattern)){possible = false; break;}
    }

    if(possible){std::cout << "Yes" << std::endl << pattern << std::endl;}
    else{std::cout << "No" << std::endl;}

    return 0;
}
