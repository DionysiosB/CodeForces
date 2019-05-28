#include <iostream>
#include <vector>

void dfs(long row, long col, const std::vector<std::string> &mz, std::vector<std::vector<std::pair<long, long> > > &visited, std::vector<std::pair<long, long> > &bs){

    long n = mz.size();
    long m = mz[0].size();

    if(visited[(row + n) % n][(col + m) % m] == std::make_pair(row, col)){return;}

    if(row < 0 || row >= n){row += 2 * n; row %= n;}
    if(col < 0 || col >= m){col += 2 * m; col %= m;}
    if(mz[row][col] == '#' || visited[row][col]){return;}

    visited[row][col] = 1;
    if((row == 0) || (row + 1 == n) || (col == 0) || (col + 1 == m)){bs.push_back(std::make_pair(row, col));}

    dfs(row - 1, col, mz, visited, bs);
    dfs(row + 1, col, mz, visited, bs);
    dfs(row, col - 1, mz, visited, bs);
    dfs(row, col + 1, mz, visited, bs);

    return;
}


int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m;
    std::vector<std::string> mz(n);
    for(long p = 0; p < n; p++){std::cin >> mz[p];}

    long sr(-1), sc(-1);
    for(long row = 0; row < n; row++){
        if(sr >= 0 || sc >= 0){break;}
        for(long col = 0; col < m; col++){
            if(mz[row][col] == 'S'){sr = row; sc = col; break;}
        }
    }

    std::vector<std::vector<bool> > visited(n, std::vector<bool>(m, 0));
    std::vector<std::pair<long, long> > rb;
    dfs(sr, sc, mz, visited, rb);


    std::vector<long> horizontal(m, 0), vertical(n, 0);
    bool infinite(false);
    for(long p = 0; p < rb.size(); p++){
        printf("%ld , %ld\n", rb[p].first, rb[p].second);
        ++vertical[rb[p].first];
        if(vertical[rb[p].first] > 1){infinite = true; break;}
        ++horizontal[rb[p].second];
        if(horizontal[rb[p].second] > 1){infinite = true; break;}
    }

    std::cout << (infinite ? "Yes" : "No") << std::endl;

    return 0;
}
