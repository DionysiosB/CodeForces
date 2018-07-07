#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int64_t n, m, d; scanf("%lld %lld %lld\n", &n, &m, &d);
    std::vector<std::pair<int64_t, int64_t> > a(n), b(m);
    for(int64_t p = 0; p < n; p++){
        int64_t c, w; scanf("%lld %lld\n", &c, &w);
        a[p] = std::make_pair(c, w);
    }

    for(int64_t p = 0; p < m; p++){
        int64_t c, w; scanf("%lld %lld\n", &c, &w);
        b[p] = std::make_pair(c, w);
    }

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    for(int64_t p = 1; p < n; p++){a[p].first += a[p - 1].first; a[p].second += a[p - 1].second;}
    for(int64_t p = 1; p < m; p++){b[p].first += b[p - 1].first; b[p].second += a[p - 1].second;}


    int64_t maxValue(0);
    for(int64_t p = 0; p < n; p++){
        int64_t remWidth = d - a[p].second;
        int64_t valA = a[p].first;
        if(remWidth < b[0].second){break;}
        int64_t valB(0);
        int64_t left(0), right(b.size() - 1);
        while(left <= right){
            int64_t mid = (left + right) / 2;
            if(b[mid].second <= remWidth){valB = b[mid].first; left = mid + 1;}
            else{right = mid - 1;}
        }

        int64_t cand = valA + valB;
        maxValue = (maxValue > cand) ? maxValue : cand;
    }

    printf("%lld\n", maxValue);

    return 0;
}
