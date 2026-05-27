#include <cstdio>
#include <vector>
#include <algorithm>

int main() {

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::vector<long> > a(n, std::vector<long>(m));
        std::vector<long> v(n * m);

        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                scanf("%ld", &a[row][col]);
                v[row * m + col] = a[row][col];
            }
        }
        sort(v.begin(), v.end());

        std::vector<std::vector<long>> grid(m, std::vector<long>(n, -1));
        for(long p = 0; p < m; p++) {
            long val(v[p]); bool done(0);
            for(long row = 0; !done && row < n; row++) {
                for(long col = 0; !done && col < m; col++) {
                    if(a[row][col] != val){continue;}
                    grid[p][row] = val;
                    a[row][col] = -1;
                    done = true;
                }
            }
        }

        std::vector<std::vector<long> > remn(n);
        for(long row = 0; row < n; row++) {
            for(long col = 0; col < m; col++) {
                if(a[row][col] > 0) {
                    remn[row].push_back(a[row][col]);
                }
            }
        } 

        for(long row = 0; row < m; row++) {
            for(long col = 0; col < n; col++) {
                if(grid[row][col] == -1) {
                    grid[row][col] = remn[col].back();
                    remn[col].pop_back();
                }
            }
        }

        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){printf("%ld ", grid[col][row]);}
            puts("");
        }

    }

}
