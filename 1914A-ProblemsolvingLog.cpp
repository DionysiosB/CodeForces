#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    const int B = 26;
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        int v[B] = {0};
        for(long p = 0; p < s.size(); p++){++v[s[p] - 'A'];}
        long cnt(0); for(long p = 0; p < B; p++){cnt += (v[p] > p);} 
        std::cout << cnt << std::endl;
    }

}
