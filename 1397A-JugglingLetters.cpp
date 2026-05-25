#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    const int N = 26;
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<long> v(N, 0);
        for(long p = 0; p < n; p++){
            std::string s; std::cin >> s;
            for(long u = 0; u < s.size(); u++){++v[s[u] - 'a'];}
        }

        bool res(true);
        for(long p = 0; p < N; p++){if(v[p] % n){res = false; break;}}
        std::cout << (res ? "YES" : "NO") << std::endl;
    }

    return 0;
}
