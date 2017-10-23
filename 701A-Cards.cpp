#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<std::pair<long, long> > v(n);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        v[p] = std::make_pair(x, p + 1);
    }

    sort(v.begin(), v.end());
    for(long p = 0; p < n / 2; p++){printf("%ld %ld\n", v[p].second, v[n - 1 - p].second);}

    return 0;
}
