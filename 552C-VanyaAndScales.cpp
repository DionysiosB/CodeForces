#include <iostream>
#include <vector>

int main(){

    int64_t w, m; std::cin >> w >> m;
    std::vector<int64_t> digits;

    bool possible(true);
    while(m > 0){digits.push_back(m % w); m /= w;}
    for(size_t p = 0; p < digits.size(); p++){
        if(digits[p] <= 1){continue;}
        else if(digits[p] > 1 && digits[p] < w - 1){possible = false; break;}
        else if(digits[p] >= w - 1 && (p < digits.size() - 1)){++digits[p + 1];}
    }

    std::cout << (possible ? "YES" : "NO") << std::endl;

    return 0;
}
