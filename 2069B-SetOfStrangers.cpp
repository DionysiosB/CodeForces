#include <cstdio>
#include <vector>
#include <unordered_set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::vector<long> > f(n, std::vector<long>(m, 0));
        std::unordered_set<long> sa, sb;
        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                scanf("%ld", &f[row][col]);
                sa.insert(f[row][col]);
                if(row && f[row - 1][col] == f[row][col]){sb.insert(f[row][col]);}
                if(col && f[row][col - 1] == f[row][col]){sb.insert(f[row][col]);}
            }
        }

        printf("%ld\n", sa.size() + sb.size() - (sb.size() > 0) - 1);
    }

}
