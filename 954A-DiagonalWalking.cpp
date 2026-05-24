#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::string s; std::cin >> s;
    for(long p = 1; p < s.size(); p++){
        if(s[p] == 'R' && s[p - 1] == 'U'){s[p] = 'D'; --n;}
        else if(s[p] == 'U' && s[p - 1] == 'R'){s[p] = 'D'; --n;}
    }

    std::cout << n << std::endl;

    return 0;
}
