#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const int N = 3;
    long n, x, y, z; scanf("%ld %ld %ld %ld", &n, &x, &y, &z);
    std::vector<int64_t> a(n); 
    for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}

    std::vector<std::pair<int64_t, int64_t> > left(n); left[0].first = left[0].second = a[0];
    for(long p = 1; p < n; p++){
        left[p].first = (left[p - 1].first < a[p]) ? left[p - 1].first : a[p];
        left[p].second = (left[p - 1].second > a[p]) ? left[p - 1].second : a[p];
    }

    std::vector<std::pair<int64_t, int64_t> > right(n); right[n - 1].first = right[n - 1].second = a[n - 1];
    for(long p = n - 2; p >= 0; p--){
        right[p].first = (right[p + 1].first < a[p]) ? right[p + 1].first : a[p];
        right[p].second = (right[p + 1].second > a[p]) ? right[p + 1].second : a[p];
    }

    int64_t total(-5e18);
    for(long p = 0; p < n; p++){
        int64_t cand(0);
        if(x < 0){cand += x * left[p].first;} else{cand += x * left[p].second;}
        cand += y * a[p];
        if(z < 0){cand += z * right[p].first;} else{cand += z * right[p].second;}
        total = (total > cand) ? total : cand;
    }

    printf("%lld\n", total);

    return 0;
}
