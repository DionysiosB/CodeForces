#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    std::vector<long> b(n, 1);
    long ind(0);
    for(long p = 0; p < n; p++){
        while(a[ind] < a[p] && a[p] <= a[ind] + k){b[ind] = 0; ++ind;}
        while(a[ind] + k < a[p]){++ind;}
    }

    long cnt(0); for(long p = 0; p < n; p++){cnt += b[p];}
    printf("%ld\n", cnt);

    return 0;
}
