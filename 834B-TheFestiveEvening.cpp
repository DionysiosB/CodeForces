#include <iostream>
#include <vector>

int main(){

    const int N = 26;
    std::vector<std::pair<long, long> > a(N, std::pair<long, long>(-1, -1));
    long n; int k; std::cin >> n >> k;
    std::string s; std::cin >> s;

    for(long p = 0; p < s.size(); p++){a[s[p] - 'A'].second = p;}
    for(long p = s.size() - 1; p >= 0; p--){a[s[p] - 'A'].first = p;}

    bool unguarded(false);
    for(long p = 0; p < s.size(); p++){
        int count = 0;
        for(int u = 0; u < N; u++){count += (a[u].first <= p) && (p <= a[u].second);}
        if(count > k){unguarded = true; break;}
    }

    std::cout << (unguarded ? "YES" : "NO") << std::endl;

    return 0;
}
