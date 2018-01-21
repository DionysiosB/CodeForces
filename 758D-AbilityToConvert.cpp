#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    int64_t n; std::cin >> n;
    std::string s; std::cin >> s;
    std::vector<int> digits;
    for(size_t p = 0; p < s.size(); p++){digits.push_back(s[p] - '0');}

    int64_t start(digits.size()-1), ind(digits.size()), current(0), bt(1), mult(1), number(0);

    while(ind >= 0){
        if(ind > 0 && current + bt * digits[ind - 1] < n){
            current += bt * digits[--ind]; 
            if(bt <= 1e17){bt *= 10;}  //Protect from overflows since max base is 1e9;
        }
        else{
            while(digits[ind] == 0 && ind < start){++ind;}
            bt = 1;
            number += mult * current;
            current = 0;
            mult *= n;
            start = ind - 1;
            if(ind <= 0){break;}
        }
    }

    std::cout << number << std::endl;

    return 0;
}
