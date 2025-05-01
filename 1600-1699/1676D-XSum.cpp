#include <cstdio>
#include <vector>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::vector<long> > f(n, std::vector<long>(m, 0));

        std::map<long, long> s, d;
        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                scanf("%ld", &f[row][col]);
                s[row + col] += f[row][col];
                d[row - col] += f[row][col];
            }
        }

        long res(0);
        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                long cand = s[row + col] + d[row - col] - f[row][col];
                res = (cand > res) ? cand : res;
            }
        }


        printf("%ld\n", res);
    }

}
