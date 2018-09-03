#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    const long N = 1e9;
    long n, k, f; scanf("%ld %ld %ld", &n, &k, &f);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(k);
    for(long p = 0; p < k; p++){scanf("%ld", &b[p]);}
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long ans(2 * N);
    for(long p = 0; p <= k - n; p++){

        long maxDist(0);
        for(long q = 0; q < n; q++){
            long dist1 = a[q] - b[p + q]; if(dist1 < 0){dist1 = -dist1;}
            long dist2 = f - b[p + q]; if(dist2 < 0){dist2 = -dist2;}
            long dist = dist1 + dist2;
            maxDist = (maxDist > dist) ? maxDist : dist;
        }

        ans = (maxDist < ans) ? maxDist : ans;
    }

    printf("%ld\n", ans);

    return 0;
}
