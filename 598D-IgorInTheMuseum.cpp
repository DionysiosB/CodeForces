#include <iostream>
#include <vector>
#include <map>
typedef std::pair<long, long> pll;

void dfs(pll node, pll root, const std::vector<std::string> &mp, std::map<pll, pll> &head, long &total){

    long row = node.first; long col = node.second;
    if(row < 0 || row >= mp.size() || col < 0 || col >= mp[0].size()){return;}
    if(head.count(node)){return;}
    head[node] = root;

    std::cout << "Entering:" << node.first << "," << node.second << " with total: " << total << std::endl;
    if(row > 0){if(mp[row - 1][col] == '.'){dfs(std::make_pair(row - 1, col), root, mp, head, total);} else{++total;}}
    if(col > 0){if(mp[row][col - 1] == '.'){dfs(std::make_pair(row, col - 1), root, mp, head, total);} else{++total;}}
    if(row < mp.size()){if(mp[row + 1][col] == '.'){dfs(std::make_pair(row + 1, col), root, mp, head, total);} else{++total;}}
    if(col < mp[0].size()){if(mp[row][col + 1] == '.'){dfs(std::make_pair(row, col + 1), root, mp, head, total);} else{++total;}}
    std::cout << "Leaving from: " << node.first << "," << node.second << " with total: " << total << std::endl;

    return;
}

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m, k; std::cin >> n >> m >> k;
    std::vector<std::string> mp(n);
    for(long p = 0; p < n; p++){std::cin >> mp[p];}

    std::map<pll, pll> head;
    std::map<pll, long> pics;

    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            if(mp[row][col] == '*'){continue;}
            if(head.count(std::make_pair(row, col))){continue;}
            pll cur = std::make_pair(row, col);
            long cnt(0);
            dfs(cur, cur, mp, head, cnt);
            pics[cur] = cnt;
        }
    }

    while(k--){
        long row, col; std::cin >> row >> col;
        --row; --col;
        std::cout << pics[head[std::make_pair(row, col)]] << std::endl;
    }

    return 0;
}
