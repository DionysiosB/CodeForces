#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;
    std::vector<int> f(s.size(), 0);
    for(long p = 0; p < s.size(); p++){
        if(s[p] == 'a'){
            if(p > 0){f[p - 1] = 1 - f[p - 1];}
            f[p] = 1;
        }
    }

    for(long p = 0; p < s.size(); p++){printf("%d ", f[p]);}
    std::cout << std::endl;

    return 0;
}
