#include <cstdio>
#include <vector>
#include <algorithm>

bool paircompare(std::pair<std::pair<long, long>, long> a, std::pair<std::pair<long, long>, long> b){return a.first.second < b.first.second;}

int main() {

    long t; scanf("%ld", &t);
    while(t--) {
        long n; scanf("%ld", &n);
        std::vector<std::pair<std::pair<long, long>, long> > v(n);
        for(long p = 0; p < n; p++){
            scanf("%ld %ld", &v[p].first.first, &v[p].first.second);
            v[p].second = p + 1;
        }

        sort(v.begin(), v.end());
        sort(v.begin(), v.begin() + n/2, paircompare);
        sort(v.begin() + n / 2, v.end(), paircompare);
        for(long p = 0; p < n / 2; p++){printf("%ld %ld\n", v[p].second, v[n - 1 - p].second);}
    }

}
