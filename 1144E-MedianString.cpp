#include <iostream>
#include <vector>

int main(){

    //std::ios_base::sync_with_stdio(false);
    const long N = 26;
    long n; std::cin >> n;
    std::string s, t; std::cin >> s >> t;
    std::vector<long> v(s.size(), 0);

    for(long p = 0; p < n; p++){v[p] = t[p] - s[p];}
    for(long p = n - 1; p >= 0; p--){if(v[p] < 0){--v[p - 1]; v[p] += N;}}
    for(long p = 0; p < n; p++){if(v[p] % 2){--v[p]; v[p + 1] += N;}}
    for(long p = 0; p < n; p++){v[p] /= 2;}
    for(long p = 0; p < n; p++){v[p] += (s[p] - 'a');}
    for(long p = n - 1; p >= 0; p--){if(v[p] >= N){++v[p - 1]; v[p] -= N;}}
    for(long p = 0; p < n; p++){std::cout << ((char)('a' + v[p]));}
    std::cout << std::endl;

    return 0;
}
