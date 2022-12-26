#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long X, Y, x0, y0; std::cin >> X >> Y >> x0 >> y0;
    std::string s; std::cin >> s;
    std::vector<std::vector<bool> > a(X, std::vector<bool>(Y, 1));

    long x(x0 - 1), y(y0 - 1), rem(X * Y);
    for(long p = 0; p < s.size(); p++){
        std::cout << (a[x][y] ? "1 " : "0 ");
        rem -= a[x][y]; a[x][y] = 0;

        if(s[p] == 'U' && x > 0){--x;}
        else if(s[p] == 'D' && x < X - 1){++x;}
        else if(s[p] == 'L' && y > 0){--y;}
        else if(s[p] == 'R' && y < Y - 1){++y;}
    }

    std::cout << rem << std::endl;

    return 0;
}
