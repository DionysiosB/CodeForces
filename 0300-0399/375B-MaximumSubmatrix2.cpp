#include<iostream>
#include<vector>
#include<algorithm>

long getMax(long a, long b){return (a > b) ? a : b;}

int main() {

    std::ios_base::sync_with_stdio(false);

    long n, m; std::cin >> n >> m;
    std::vector<std::string> g(n);
    std::vector<std::vector<long> > s(n, std::vector<long>(m, 0));

    for(long row = 0; row < n; row++) {
        std::cin >> g[row];
        s[row][m - 1] = g[row][m - 1] - '0';
        for(long col = m - 2; col >= 0; col--){s[row][col] = (g[row][col] == '1') ? s[row][col + 1] + 1 : 0;}
    }

    std::vector<long> arr(n, 0);
    
    long ans = 0;
    for(long col = 0; col < m; col++) {
        for(long row = 0; row < n; row++){arr[row] = s[row][col];}
        sort(arr.begin(), arr.end());
        for(long row = n - 1; row >= 0; row--){ans = getMax(ans, arr[row] * (n-row));}
    }
    
    std::cout << ans << std::endl;
    return 0;
}
