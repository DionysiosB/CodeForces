#include <iostream>

int main(){

    const int B = 26;
    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        int v[B] = {0};
        for(long p = 0; p < s.size(); p++){++v[s[p] - 'a'];}
        long cnt(0); for(long p = 0; p < B; p++){cnt += v[p] % 2;}
        puts(cnt <= k + 1 ? "YES" : "NO");
    }

}
