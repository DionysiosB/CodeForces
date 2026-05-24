#include <iostream>
#include <vector>

int main(){

    const int L = 26;
    const int N = 100;
    std::ios_base::sync_with_stdio(false);
    std::vector<std::string> a(N);
    for(long p = 0; p < N; p++){a[p] = ('A' + (p / L)); a[p] += ('a' + (p % L));}

    int n, k; std::cin >> n >> k;
    std::vector<bool> eff(n - k + 1, 0);
    for(long p = 0; p < n - k + 1; p++){std::string s; std::cin >> s; eff[p] = (s == "YES");}

    std::vector<std::string> v;
    for(long p = 0; p < k - 1; p++){v.push_back(a[p]);}
    for(long p = k - 1; p < n; p++){v.push_back(eff[p - k + 1] ? a[p] : v[p - k + 1]);}
    for(long p = 0; p < n; p++){std::cout << v[p] << " ";}
    std::cout << std::endl;

    return 0;
}
