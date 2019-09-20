#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> x(n + m); for(long p = 0; p < n + m; p++){scanf("%ld", &x[p]);}
    std::vector<long> d(m), r(n), cnt(m, 0);

    long a(0), b(0);
    for(long p = 0; p < m + n; p++){
        long y; scanf("%ld", &y);
        if(y){d[a++] = x[p];}
        else{r[b++] = x[p];}
    }

    sort(r.begin(), r.end());
    sort(d.begin(), d.end());

    long idx(0);
    for(long p = 0; p < n; p++){
        if(r[p] < d[0]){++cnt[0];}
        else if(r[p] > d[m - 1]){++cnt[m - 1];}
        else{
            if(r[p] > d[idx]){++idx;}
            if(r[p] - d[idx - 1] <= d[idx] - r[p]){++cnt[idx - 1];}
            else{++cnt[idx];}
        }
    }

    for(long p = 0; p < m; p++){printf("%ld ", cnt[p]);}
    puts("");

    return 0;
}
