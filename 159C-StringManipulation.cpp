#include <iostream>
#include <vector>
#include <set>

int main(){

    const int N = 26;
    std::ios_base::sync_with_stdio(false);
    long k; std::cin >> k;
    std::string s; std::cin >> s;
    std::string t("");
    for(long p = 0; p < k; p++){t += s;}
    std::vector<std::vector<long> > m(N);
    std::vector<bool> f(t.size(), 1);

    for(long p = 0; p < t.size(); p++){m[t[p] - 'a'].push_back(p);}
    long n; std::cin >> n;
    while(n--){
        long r; char c; std::cin >> r >> c;
        int cc = c - 'a';
        f[m[cc][r - 1]] = 0;
        m[cc].erase(m[cc].begin() + r - 1);
    }

    for(long p = 0; p < t.size(); p++){if(f[p]){std::cout << t[p];}}
    std::cout << std::endl;

    return 0;
}
