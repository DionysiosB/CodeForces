#include <iostream>
#include <vector>

int main(){

    const long N = 100;
    const long D = 2 * N + 7;
    std::vector<std::vector<long> > vis(D, std::vector<long>(D, 0));

    long x(D / 2), y(D / 2);
    vis[x][y] = true;
    bool possible(true);

    std::string s; std::cin >> s;
    for(long p = 0; p < s.size(); p++){

        if(s[p] == 'U'){++y;}
        else if(s[p] == 'D'){--y;}
        else if(s[p] == 'R'){++x;}
        else if(s[p] == 'L'){--x;}

        if(vis[x][y]){possible = false; break;}
        else if(vis[x][y + 1] + vis[x][y - 1] + vis[x + 1][y] + vis[x - 1][y] > 1){possible = false; break;}

        vis[x][y] = true;
    }

    puts(possible ? "OK" : "BUG");

    return 0;
}
