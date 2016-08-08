#include <cstdio>
#include <iostream>

int main(){

    long long parity[2][2] = {{0,0},{0,0}};
    long long output[2] = {0,0};
    std::string s; getline(std::cin, s);
    for(long p = 0; p < s.size(); p++){
        int c = s[p] - 'a';
        ++parity[c][p % 2];
        output[0] += parity[c][(p + 1) % 2];
        output[1] += parity[c][p % 2];
    }

    printf("%lld %lld\n", output[0], output[1]);

    return 0;
}
