#include <iostream>

int main() {

    long n; std::cin >> n;
    std::string s; std::cin >> s;

    long ones(0);
    for(long p = 0; p < s.size(); p++){ones += (s[p] == '1');}

    for(long p = (1 << ones); p <= (1 << n) - (1 << (n - ones)) + 1; p++){printf("%ld ", p);}
    puts("");

    return 0;
}

