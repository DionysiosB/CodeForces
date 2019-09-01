#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::vector<char> t; 
    for(long p = 0; p < s.size(); p++){
        if((t.size() % 2) && s[p] == t.back()){continue;}
        t.push_back(s[p]);
    }

    if(t.size() % 2){t.pop_back();}
    std::cout << (s.size() - t.size()) << std::endl;
    for(long p = 0; p < t.size(); p++){std::cout << t[p];}
    std::cout << std::endl;

    return 0;
}
