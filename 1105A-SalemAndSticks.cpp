#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long median = (a[(n - 1) / 2] + a[n / 2]) / 2;

    long mid(0), minCost(1e10); 
    for(long t = median - 1; t <= median + 1; t++){
        if(t <= 0){continue;}
        long cost(0);
        for(long p = 0; p < n; p++){
            if(a[p] < t - 1){cost += t - 1 - a[p];}
            else if(a[p] > t + 1){cost += a[p] - t - 1;}
        }
        if(cost < minCost){minCost = cost; mid = t;}
    }

    printf("%ld %ld\n", mid, minCost);

    return 0;
}
