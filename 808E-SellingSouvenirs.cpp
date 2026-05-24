#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    const int T = 3;
    int64_t n, m; scanf("%lld %lld", &n, &m);
    std::vector<std::vector<int64_t> > a(T + 1);
    for(int64_t p = 0; p < n; p++){
        int64_t w, c; scanf("%lld %lld", &w, &c);
        a[w].push_back(c);
    }

    for(int p = 1; p <= T; p++){sort(a[p].rbegin(), a[p].rend());}

    std::vector<int64_t> dp(m + 1, 0);
    std::vector<std::vector<int64_t> > ind(m + 1, std::vector<int64_t>(T + 1, 0));
    for(int64_t p = 1; p <= m; p++){
        dp[p] = dp[p - 1]; ind[p] = ind[p - 1];
        for(int64_t u = 1; u <= T && u <= p; u++){
            int64_t index = ind[p - u][u];
            if(index >= a[u].size()){continue;}
            int64_t cand = dp[p - u] + a[u][index];
            if(cand >= dp[p]){
                dp[p] = cand;
                ind[p] = ind[p - u]; ++ind[p][u];
            }
        }
    }

    printf("%lld\n", dp[m]);

    return 0;
}
