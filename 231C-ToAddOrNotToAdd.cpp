#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int64_t n, k; scanf("%lld %lld\n", &n, &k);
    std::vector<int64_t> a(n);
    for(int64_t p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());

    int64_t maxcount(1), popular(a[0]), l(0), needed(0);
    for(long r = 1; r < n; r++){
        needed += (r - l) * (a[r] - a[r - 1]);
        while(needed > k){needed -= (a[r] - a[l]); ++l;}
        if(r - l + 1 > maxcount){maxcount = r - l + 1; popular = a[r];}
    }

    printf("%lld %lld\n", maxcount, popular);

    return 0;
}
