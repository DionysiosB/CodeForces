#include <iostream>
#include <vector>

int main(){

    std::string s; getline(std::cin, s);
    long m; std::cin >> m;
    std::vector<long> rev(s.size() + 1, 0);
    for(int p = 0; p < m; p++){
        long a; std::cin >> a; --a;
        ++rev[a]; --rev[s.size() - a];
    }

    int reversals(0);
    std::string ans(s);
    for(int p = 0; p < s.size(); p++){
        reversals += rev[p]; reversals %= 2;
        if(reversals){ans[p] = s[s.size() - p - 1];}
    }

    std::cout << ans << std::endl;

    return 0;
}
