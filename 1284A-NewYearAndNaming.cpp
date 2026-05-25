#include <iostream>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::string> s(n); for(long p = 0; p < n; p++){std::cin >> s[p];}
    std::vector<std::string> t(m); for(long p = 0; p < m; p++){std::cin >> t[p];}

    long q; std::cin >> q;
    while(q--){
        long y; std::cin >> y; --y;
        std::cout << s[y % n] << t[y % m] << std::endl;
    }

    return 0;
}
