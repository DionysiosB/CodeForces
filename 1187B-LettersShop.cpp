#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    const int N = 26;
    std::vector<std::vector<long> > v(N);

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    for(long p = 0; p < s.size(); p++){v[s[p] - 'a'].push_back(p + 1);}

    long m; std::cin >> m;
    while(m--){
        std::string t; std::cin >> t;
        std::vector<long> w(N);
        for(long p = 0; p < t.size(); p++){++w[t[p] - 'a'];}
        long ans(0);
        for(long p = 0; p < N; p++){
            if(w[p] == 0){continue;}
            ans = (ans > v[p][w[p] - 1]) ? ans : v[p][w[p] - 1];
        }
        std::cout << ans << std::endl;
    }

    return 0;
}
