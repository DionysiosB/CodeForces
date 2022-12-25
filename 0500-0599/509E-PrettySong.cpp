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

    double total(0), sum(0);

    for(long len = 1; len <= s.size(); len++){
        sum += (cm[s.size()- len + 1] - cm[len - 1]);
        total += sum / len;
    }

    printf("%.8lf\n",total);

    return 0;
}
