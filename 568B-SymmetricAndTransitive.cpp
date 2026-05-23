#include <iostream>
#include <vector>

int main() {

    const int64_t MOD = 1e9 + 7;
    int64_t n; std::cin >> n;
    std::vector<std::vector<int64_t> > m(n + 2, std::vector<int64_t>(n + 2, 0));
    m[1][1] = 1;

    for(int64_t row = 2; row < n + 2; row++) {
        m[row][1] = m[row - 1][row - 1];
        for (int64_t col = 2; col <= row; col++)
            m[row][col] = (m[row][col - 1] + m[row - 1][col - 1]) % MOD;
    }

    std::cout << m[n + 1][n];

    return 0;
}
