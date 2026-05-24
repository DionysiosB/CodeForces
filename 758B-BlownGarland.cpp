#include <iostream>
#include <vector>

int main(){

    const int M = 4;
    std::string K("RBYG");

    std::string s; std::cin >> s;
    std::vector<char> v(M, 0);
    std::vector<long> w(M, 0);
    for(size_t p = 0; p < s.size(); p++){
        if(s[p] == '!'){++w[p % M];}
        else{v[p % M] = s[p];}
    }

    for(int p = 0; p < M; p++){
        for(int u = 0; u < M; u++){
            if(v[u] != K[p]){continue;}
            else{std::cout << w[u] << " "; break;}
        }
    }

    std::cout << std::endl;

    return 0;
}
