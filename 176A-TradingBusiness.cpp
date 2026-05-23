#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m, k; std::cin >> n >> m >> k;
    std::vector<std::vector<long> > a(n, std::vector<long>(m, 0));
    std::vector<std::vector<long> > b(n, std::vector<long>(m, 0));
    std::vector<std::vector<long> > c(n, std::vector<long>(m, 0));
    for(long p = 0; p < n; p++){
        std::string s; std::cin >> s;
        for(long q = 0; q < m; q++){std::cin >> a[p][q] >> b[p][q] >> c[p][q];}
    }

    long mx(0);
    for(long from = 0; from < n; from++){
        for(long to = 0; to < n; to++){
            if(from == to){continue;}
            std::vector<std::pair<long, long> > v(m);
            for(long u = 0; u < m; u++){v[u] = std::make_pair(b[to][u] - a[from][u], c[from][u]);}
            sort(v.rbegin(), v.rend());
            long pnl(0), rem(k);
            for(long u = 0; u < m && rem > 0; u++){
                if(v[u].first < 0){break;}
                long num = (rem < v[u].second) ? rem : v[u].second;
                pnl += v[u].first * num;
                rem -= num;
            }

            mx = (mx > pnl) ? mx : pnl;
        }
    }

    std::cout << mx << std::endl;

    return 0;
}
