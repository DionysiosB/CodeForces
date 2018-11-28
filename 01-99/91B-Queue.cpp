#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<long, long> > a(n); 
    for(long p = 0; p < n; p++){scanf("%ld", &a[p].first); a[p].second = p;}
    sort(a.begin(), a.end());
    long mx(-1);
    std::vector<long> f(n); 
    for(long p = 0; p < n; p++){
        f[a[p].second] = (a[p].second > mx) ? (-1) : (mx - a[p].second - 1);
        mx = (mx > a[p].second) ? mx : a[p].second;
    }

    for(long p = 0; p < n; p++){printf("%ld ", f[p]);}
    puts("");

    return 0;
}
