#include <iostream>

int main() {

    int64_t n, d, m, l; std::cin >> n >> d >> m >> l;

    int64_t ans(0);
    for (int64_t a = 0; a < n; a++) {
        int64_t b = m * a + l + d; 
        ans = b - b % d;
        if (b - b % d < m * (a + 1)){break;}
    }

    std::cout << ans << std::endl;

    return 0;
}
