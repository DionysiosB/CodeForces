#include <iostream>
#include <vector>
#include <algorithm>

bool lengthCompare(std::string s, std::string t){return s.size() < t.size();}

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<std::string> v(n);
    for(long p = 0; p < n; p++){std::cin >> v[p];}
    sort(v.begin(), v.end(), lengthCompare);

    bool possible(true);
    for(long p = 1; p < n; p++){if(v[p].find(v[p - 1]) == std::string::npos){possible = false; break;}}
    if(possible){
        std::cout << "YES" << std::endl;
        for(long p = 0; p < n; p++){std::cout << v[p] << std::endl;}
    }
    else{std::cout << "NO" << std::endl;}

    return 0;
}
