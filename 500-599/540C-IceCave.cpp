#include <iostream>
#include <vector>

bool dfs(long r, long c, std::vector<std::string> &a, const long &tr, const long &tc){

    if(r < 0 || r >= a.size()){return false;}
    if(c < 0 || c >= a[0].size()){return false;}
    if(a[r][c] == 'X'){return ((r == tr) && (c == tc));}
    a[r][c] = 'X';
    if(dfs(r - 1, c, a, tr, tc)){return true;}
    if(dfs(r + 1, c, a, tr, tc)){return true;}
    if(dfs(r, c - 1, a, tr, tc)){return true;}
    if(dfs(r, c + 1, a, tr, tc)){return true;}
    return false;
}


int main(){

    long n, m; std::cin >> n >> m;
    std::vector<std::string> a(n);
    for(long p = 0; p < n; p++){std::cin >> a[p];}
    long r1, c1, r2, c2; std::cin >> r1 >> c1 >> r2 >> c2;
    --r1; --c1; --r2; --c2; a[r1][c1] = '.';
    bool res = dfs(r1, c1, a, r2, c2);
    puts(res ? "YES" : "NO");

    return 0;
}
