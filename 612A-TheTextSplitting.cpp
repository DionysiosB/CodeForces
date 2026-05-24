#include <iostream>
#include <vector>

int main(){

    int n, p, q; std::cin >> n >> p >> q;
    std::string s; std::cin >> s;

    std::vector<int> decomp(n + 1, -1);
    decomp[0] = 0;
    for(int k = 0; k < n; k++){
        if(decomp[k] < 0){continue;}
        if(k + p <= n){decomp[k + p] = p;}
        if(k + q <= n){decomp[k + q] = q;}
    }

    if(decomp[n] < 0){puts("-1"); return 0;}
    std::vector<int> lengths;
    int index(n);
    while(index > 0){lengths.push_back(decomp[index]); index -= decomp[index];}

    std::cout << lengths.size() << std::endl;
    index = 0;
    for(int p = 0; p < lengths.size(); p++){
        std::cout << s.substr(index, lengths[p]) << std::endl;
        index += lengths[p];
    }

    return 0;
}
