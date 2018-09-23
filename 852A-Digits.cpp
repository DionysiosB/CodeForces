#include <iostream>
#include <vector>

int main(){

    const int N = 3;
    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::vector<int> a(s.size());

    long total(0);
    for(long p = 0; p < n; p++){
        std::cout << s[p] << ((p < n - 1) ? "+" : "\n");
        total += (s[p] - '0');
    }

    std::vector<int> b;
    long sum(0);
    while(total > 0){int x = total % 10; b.push_back(x); total /= 10; sum += x;}
    for(int p = b.size() - 1; p >= 0; p--){std::cout << b[p] << ((p > 0) ? "+" : "\n");}; 

    std::vector<int> d;
    long fs(0);
    while(sum > 0){int x = sum % 10; d.push_back(x); sum /= 10; fs += x;}
    for(int p = d.size() - 1; p >= 0; p--){std::cout << d[p] << ((p > 0) ? "+" : "\n");}; 

    return 0;
}
