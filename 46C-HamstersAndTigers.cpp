#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;

    long m(0);
    for(long p = 0; p < n; p++){m += (s[p] == 'H');}
    long minCount(n + 1);
    for(long start = 0; start < n; start++){
        long cnt(0);
        for(long p = 0; p < m; p++){cnt += (s[(start + p) % n] == 'T');}
        minCount = (minCount < cnt) ? minCount : cnt;
    }

    printf("%ld\n", minCount);

    return 0;
}
