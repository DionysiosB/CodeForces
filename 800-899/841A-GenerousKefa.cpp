#include <iostream>
#include <vector>

int main(){

    const int N = 26;
    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;
    bool possible(true);
    std::vector<long> v(N);
    for(long p = 0; p < s.size(); p++){++v[s[p] - 'a'];}
    for(long p = 0; p < N; p++){if(v[p] > k){possible = false; break;}}
    std::cout << (possible ? "YES" : "NO") << std::endl;

    return 0;
}
