#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::pair<long, std::pair<long, long> > > v(m);
        for(long p = 0; p < m; p++){scanf("%ld %ld", &v[p].second.first, &v[p].first); v[p].second.second = p + 1;}
        sort(v.begin(), v.end());
        std::vector<std::pair<long, long> > z(2 * n);
        long long wsum(0);
        for(long p = 0; p < 2 * n; p++){
            wsum += v[p].first;
            z[p] = v[p].second;
        }

        printf("%lld\n", wsum);
        sort(z.begin(), z.end());
        for(long p = 0; p < n; p++){printf("%ld %ld\n", z[p].second, z[2 * n - 1 - p].second);}
        puts("");
    }

}
