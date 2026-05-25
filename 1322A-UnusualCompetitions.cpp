#include <iostream>

int main() {

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long start(-1), cnt(0), cs(0);
    for(long p = 0; p < s.size(); p++){
        cs += (s[p] == '(') - (s[p] == ')');
        //std::cout << "cs:" << cs << std::endl;
        if(s[p] == ')' && cs == -1){start = p;}
        else if(s[p] == '(' && cs == 0){cnt += (p - start + 1);}
    }

    cnt = (cs ? -1 : cnt);
    std::cout << cnt << std::endl;

    return 0;
}
