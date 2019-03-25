#include <iostream>

int main() {

    std::ios_base::sync_with_stdio(false);
    const long START = 1989;
    long n; std::cin >> n;

    while(n--){
        std::string s; std::cin >> s;
        long year(0);
        for(long p = 4; p < s.size(); p++){year = 10 * year + (s[p] - '0');}
        long t(10), now(1989);
        for(long p = 4; p < s.size() - 1; p++){now += t; t *= 10;}
        while (year < now){year += t;}
        std::cout << year << std::endl;
    }

    return 0;
}
