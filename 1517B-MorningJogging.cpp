#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> a;
        std::vector<std::vector<std::pair<long, long> > > b(n, std::vector<long>(m, std::make_pair(0, 0)));
        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                long x; scanf("%ld", x);
                a.push_back(std::make_pair(x, row));
                b[row][col] = x;
            }
        }
        sort(a.begin(), a.end());

        std::vector<std::vector<long> c(n, std::vector<long>(m, -1));

        for(long p = 0; p < m; p++){
            long cpt = a[p].second;
            c[cpt][p] = a[p].first;
        }

    }

}
