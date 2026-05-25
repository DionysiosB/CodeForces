#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    long t; std::cin >> t;
    while(t--){
        long n, start, step; std::cin >> n >> start >> step;
        --start;
        std::string s; std::cin >> s;
        long x, y; std::cin >> x >> y;

        std::vector<long> v(n + step, 0);
        for(long p = n - 1; p >= 0; p--){v[p] = v[p + step] + (s[p] == '0');}
        long long ans(2e18);
        for(long p = start; p < n; p++){
            long long cur = x * v[p] + (p - start) * y;
            ans = (ans < cur) ? ans : cur;
        }

        std::cout << ans << std::endl;
    }
}
