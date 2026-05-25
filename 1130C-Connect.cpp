#include <iostream>
#include <vector>

void dfs(long row, long col, const std::vector<std::string> &m, std::vector<std::vector<int> > &been, int tp){
    if(m[row][col] == '1'){return;}
    if(been[row][col] != 0){return;}
    been[row][col] = tp;
    if(row > 0){dfs(row - 1, col, m, been, tp);}
    if(row + 1 < m.size()){dfs(row + 1, col, m, been, tp);}
    if(col > 0){dfs(row, col - 1, m, been, tp);}
    if(col + 1 < m.size()){dfs(row, col + 1, m, been, tp);}
}

int main(){

    long n; std::cin >> n;
    long rs, cs; std::cin >> rs >> cs;
    long rt, ct; std::cin >> rt >> ct;
    --rs; --cs; --rt; --ct;

    std::vector<std::string> m(n); for(long p = 0; p < n; p++){std::cin >> m[p];}
    std::vector<std::vector<int> > vis(n, std::vector<int>(n, 0));
    dfs(rs, cs, m, vis, 1);
    dfs(rt, ct, m, vis, 2);

    if(vis[rt][ct] == 1){puts("0");}
    else{
        long dist = 1e9;
        for(long xr = 0; xr < n; xr++){
            for(long xc = 0; xc < n; xc++){
                if(m[xr][xc] == '1'){continue;}
                if(vis[xr][xc] != 1){continue;}


                for(long yr = 0; yr < n; yr++){
                    for(long yc = 0; yc < n; yc++){
                        if(m[yr][yc] == '1'){continue;}
                        if(vis[yr][yc] != 2){continue;}
                        long cur = (xr - yr) * (xr - yr) + (xc - yc) * (xc - yc);
                        dist = dist < cur ? dist : cur;
                    }
                }
            }
        }

        printf("%ld\n", dist);
    }

    return 0;
}
