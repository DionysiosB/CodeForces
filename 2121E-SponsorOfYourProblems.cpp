#include<iostream>

int main() {

    std::ios_base::sync_with_stdio(0);
    long t; std::cin >> t;
    while (t--) {
        std::string l, r; std::cin >> l >> r;
        if(l == r) {
            std::cout << (2 * l.size()) << std::endl;
            continue;
        }

        long idx(0);
        while(idx < l.size() && l[idx] == r[idx]){++idx;}
        if(l[idx] + 1 < r[idx]){std::cout << (2 * idx) << std::endl; continue;}
        long cnt(2 * idx + 1);
        for (long p = idx + 1; p < l.size(); p++) {
            if(l[p] == '9' && r[p] == '0'){++cnt;}
            else break;
        }

        std::cout << cnt << std::endl;

    }
}
