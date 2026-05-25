#include <iostream>
#include <vector>

int main(){

    const int N = 26;

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::vector<long> a(N, 0);
    for(long p = 0; p < s.size(); p++){++a[s[p] - 'a'];}
    bool possible(s.size() <= 1);
    for(long p = 0; p < N; p++){if(a[p] > 1){possible = true; break;}}
    std::cout << (possible ? "Yes" : "No") << std::endl;

    return 0;
}
