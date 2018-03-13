#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main(){

    int64_t n, m, k; scanf("%lld %lld %lld\n", &n, &m, &k);
    int64_t x, s; scanf("%lld %lld\n", &x, &s);

    std::vector<std::pair<int64_t, int64_t> > t(m + 1);
    t[0] = std::pair<int64_t, int64_t>(x, 0);
    for(int64_t p = 1; p <= m; p++){int64_t temp; scanf("%lld", &temp); t[p].first = temp;}
    for(int64_t p = 1; p <= m; p++){int64_t temp; scanf("%lld", &temp); t[p].second = temp;}

    std::vector<std::pair<int64_t, int64_t> > r(k + 1);
    r[0] = std::pair<int64_t, int64_t>(0, 0);
    for(int64_t p = 1; p <= k; p++){int64_t temp; scanf("%lld", &temp); r[p].second = temp;}
    for(int64_t p = 1; p <= k; p++){int64_t temp; scanf("%lld", &temp); r[p].first = temp;}

    int64_t mintime = std::numeric_limits<int64_t>::max();
    for(int64_t p = 0; p <= m; p++){
        int64_t time = t[p].first;
        if(time >= x && p > 0){continue;}
        int64_t budget = s - t[p].second; if(budget < r[0].first){continue;}
        std::vector<std::pair<int64_t, int64_t> >::iterator it = std::upper_bound(r.begin(), r.end(), std::pair<int64_t, int64_t>(budget, std::numeric_limits<int64_t>::max()));
        --it;
        int64_t ready = ((it->second) < n) ? (it->second) : n;
        int64_t total = time * (n - ready);
        mintime = (total < mintime) ? total : mintime;
    }

    printf("%lld\n", mintime);

    return 0;
}
