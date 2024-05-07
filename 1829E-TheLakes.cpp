#include <cstdio>
#include <vector>


long dfs(long row, long col, std::vector<std::vector<long> > &md){
    if(row < 0 || row >= md.size() || col < 0 || col >= md[0].size()){return 0;}
    if(!md[row][col]){return 0;}
    long mv = md[row][col]; 
    md[row][col] = 0;
    long ms = mv + dfs(row - 1, col, md) + dfs(row + 1, col, md) + dfs(row, col - 1, md) + dfs(row, col + 1, md);
    return ms;

}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long nr, nc; scanf("%ld %ld", &nr, &nc);
        std::vector<std::vector<long> > d(nr, std::vector<long>(nc, 0));
        for(long row = 0; row < nr; row++){for(long col = 0; col < nc; col++){scanf("%ld", &d[row][col]);}}

        long mxd(0);
        for(long row = 0; row < nr; row++){
            for(long col = 0; col < nc; col++){
                long cs = dfs(row, col, d);
                mxd = (mxd > cs ? mxd : cs);
            }
        }

        printf("%ld\n", mxd);
    }

}
