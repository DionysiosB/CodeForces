#include <iostream>
#include <vector>

int main(){

    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;
    std::vector<long> v(k, 0);
    for(long p = 0; p < n; p++){++v[s[p] - 'A'];}
    long cnt(n);
    for(long p = 0; p < k; p++){cnt = (cnt < v[p]) ? cnt : v[p];}
    printf("%ld\n", k * cnt);

    return 0;
}
