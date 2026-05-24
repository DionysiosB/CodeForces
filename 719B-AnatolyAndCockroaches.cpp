#include <iostream>
#include <vector>

int main(){

    long n(0); std::cin >> n;
    std::string s(""); std::cin >> s;
    long countAr(0), countAb(0), countBr(0), countBb(0);

    for(int p = 0; p <= s.size(); p++){
        if((p % 2 == 0) && (s[p] == 'b')){++countBr;}
        else if((p % 2 == 0) && (s[p] == 'r')){++countAb;}
        else if((p % 2 == 1) && (s[p] == 'b')){++countAr;}
        else if((p % 2 == 1) && (s[p] == 'r')){++countBb;}
    }

    long countA = (countAr > countAb) ? countAr : countAb;
    long countB = (countBr > countBb) ? countBr : countBb;
    long count = (countA < countB) ? countA : countB;

    std::cout << count << std::endl;

    return 0;
}
