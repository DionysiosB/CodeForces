#include <iostream>
#include <vector>

bool isVowel(char c){return (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U') || (c == 'Y');}

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; getline(std::cin, s);
    std::vector<bool> v(s.size() + 1, 0); 
    std::vector<long> cm(s.size() + 1, 0);
    for(long p = 1; p < v.size(); p++){
        v[p] = isVowel(s[p - 1]);
        cm[p] = (p > 0 ? cm[p - 1] : 0) + v[p];
    }

    double total = cm.back() + 1.0 * cm.back() / s.size();
    for(long len = 2; len < s.size(); len++){
        double cur(0);
        for(long p = 1; p + len - 1 <= s.size(); p++){cur += (cm[p + len - 1] - cm[p - 1]);}
        cur /= len; total += cur;
    }

    printf("%.7lf\n", total);

    return 0;
}
