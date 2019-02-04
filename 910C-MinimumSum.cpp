#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    const int N = 10;
    long n; std::cin >> n; 
    std::vector<std::pair<long, char> > w(N);
    for(int p = 0; p < N; p++){w[p].second = 'a' + p;}
    
    std::vector<bool> nozero(N, 0);
    for(long p = 0; p < n; p++){
        std::string s; std::cin >> s;
        nozero[s[0] - 'a'] = true;
        for(long u = s.size() - 1, mult = 1; u >= 0; u--, mult *= 10){w[s[u] - 'a'].first += mult;}
    }

    sort(w.begin(), w.end());

    bool pendingZero(true);
    std::vector<int> mv(N, 0);
    for(int p = N - 1; p >= 0; p--){
        if(pendingZero && !nozero[w[p].second - 'a']){mv[p] = 0; pendingZero = false;}
        else{mv[p] = N - 1 - p + pendingZero;}
    }

    long sum(0);
    for(int p = 0; p < N; p++){sum += w[p].first * mv[p];}
    std::cout << sum << std::endl;

    return 0;
}
