#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, q; std::cin >> n >> q;
    std::string s; std::cin >> s;
    std::vector<long> a(n + 1, 0);
    for(long p = 1; p <= n; p++){a[p] = a[p - 1] + (s[p - 1] - 'a') + 1;}
    for(long p = 0; p < q; p++){
        long left, right; std::cin >> left >> right;
        std::cout << (a[right] - a[left - 1]) << std::endl;
    }

}
