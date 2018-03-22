#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int64_t n; scanf("%lld", &n);
    std::vector<std::pair<std::pair<int64_t, int64_t>, int64_t> > a(n);
    for(int64_t p = 0; p < n; p++){
        int64_t x, y; scanf("%lld %lld", &x, &y);
        a[p] = std::make_pair(std::make_pair(x, y), p + 1);
    }

    sort(a.begin(), a.end());
    printf("%lld %lld ", a[0].second, a[1].second);
    int64_t third(0);
    for(int64_t p = 2; p < n; p++){
        int64_t x0 = a[0].first.first, y0 = a[0].first.second;
        int64_t x1 = a[1].first.first, y1 = a[1].first.second;
        int64_t xp = a[p].first.first, yp = a[p].first.second;
        if((yp - y0) * (x1 - x0) != (xp - x0) * (y1 - y0)){third = a[p].second; break;}
    }

    printf("%lld\n", third);

    return 0;
}
