#include <iostream>

int main(){

    std::string s; std::cin >> s;
    int64_t m; std::cin >> m;
    int64_t mod(0), pow(1);

    for(size_t p = 0; p < s.size(); p++){
        mod = (10 * mod + (s[p] - '0')) % m;
        pow = (10 * pow) % m;
    }

    int64_t minMod(mod);
    for(size_t p = 0; p < s.size() - 1; p++){
        mod = ((10 * mod) % m + ((s[p] - '0')) % m - ((pow * (s[p] - '0'))) % m);
        mod = (mod + m) % m;
        if(s[p + 1] == '0'){continue;}
        minMod = (minMod < mod) ? minMod : mod;
    }

    std::cout << minMod << std::endl;

    return 0;
}
