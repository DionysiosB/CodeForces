#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m, x, y; std::cin >> n >> m >> x >> y;
    std::vector<long> a(m, 0);
    for(long row = 0; row < n; row++){
        std::string s; std::cin >> s;
        for(long col = 0; col < m; col++){a += (s[col] == '#');}
    }

    std::vector<std::vector<long> > f(2, std::vector<long>(m, 0));
    std::vector<bool> possible(false);

    

    return 0;
}
