#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> x(n + m); for(long p = 0; p < n + m; p++){scanf("%ld", &x[p]);}
    std::vector<long> d, r, cnt(m, 0);

    for(long p = 0; p < m + n; p++){
        int y; scanf("%d", &y);
        if(y){d.push_back(x[p]);}
        else{r.push_back(x[p]);}
    }

    sort(r.begin(), r.end());
    sort(d.begin(), d.end());

    long idx(0);
    for(long p = 0; p < n; p++){
        if(r[p] < d[0]){++cnt[0];}
        else if(r[p] > d.back()){++cnt.back();}
        else{
            while(idx + 1 < d.size() && r[p] > d[idx]){++idx;}
            if(r[p] - d[idx - 1] <= d[idx] - r[p]){++cnt[idx - 1];}
            else{++cnt[idx];}
        }
    }

    for(long p = 0; p < m; p++){printf("%ld ", cnt[p]);}
    puts("");

    return 0;
}
