#include <iostream>
#include <vector>

int main(){

    long n; std::cin >> n;
    std::vector<long> v(n, 0);
    int64_t total(0);
    for(long row = 0; row < n; row++){
        std::string s; std::cin >> s;
        long count(0);
        for(long col = 0; col < n; col++){if(s[col] == 'C'){++count; ++v[col];}}
        total += count * (count - 1) / 2;
    }

    for(long p = 0; p < n; p++){total += v[p] * (v[p] - 1) / 2;}
    std::cout << total << std::endl;

    return 0;
}
