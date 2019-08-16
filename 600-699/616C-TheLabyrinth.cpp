#include <iostream>
#include <vector>
#include <set>

void dfs(long row, long col, std::pair<long, long> h, long &count, const std::vector<std::string> &g, std::vector<std::vector<std::pair<long, long> > > &heads){

    if(row < 0 || row >= heads.size()){return;}
    if(col < 0 || col >= heads[0].size()){return;}
    if(g[row][col] == '*'){return;}
    if(heads[row][col].first >= 0){return;}

    heads[row][col] = h; ++count;
    dfs(row - 1, col, h, count, g, heads);
    dfs(row + 1, col, h, count, g, heads);
    dfs(row, col - 1, h, count, g, heads);
    dfs(row, col + 1, h, count, g, heads);

    return;
}

int main(){

    const long B = 10;
    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m;
    std::vector<std::string> g(n);
    for(long p = 0; p < n; p++){std::cin >> g[p];}
    std::vector<std::vector<std::pair<long, long> > > heads(n, std::vector<std::pair<long, long> >(m, std::make_pair(-1, -1)));
    std::vector<std::vector<long> > sz(n, std::vector<long>(m, 0));

    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            if(g[row][col] == '*'){continue;}
            if(heads[row][col].first >= 0){continue;}
            std::pair<long, long> h = std::make_pair(row, col);
            long count(0);
            dfs(row, col, h, count, g, heads);
            sz[row][col] = count;
        }
    }

    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            if(g[row][col] == '.'){std::cout << '.';}
            else{
                std::set<std::pair<long, long> > st; 
                if(row > 0 && g[row - 1][col] == '.'){st.insert(heads[row - 1][col]);}
                if(row < n - 1 && g[row + 1][col] == '.'){st.insert(heads[row + 1][col]);}
                if(col > 0 && g[row][col - 1] == '.'){st.insert(heads[row][col - 1]);}
                if(col < m - 1 && g[row][col + 1] == '.'){st.insert(heads[row][col + 1]);}
                long total(1);
                for(std::set<std::pair<long, long> >::iterator it = st.begin(); it != st.end(); it++){
                    long rr = it->first;
                    long cc = it->second;
                    if(rr < 0 || cc < 0){continue;}
                    total += sz[rr][cc];
                }
                total %= B;
                std::cout << total;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
