#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<long, long> > a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p].first); a[p].second = p + 1;}
    sort(a.rbegin(), a.rend());
    long total(n); for(long p = 1; p < n; p++){total += p * a[p].first;}
    printf("%ld\n", total);
    for(long p = 0; p < n; p++){printf("%ld ", a[p].second);}
    puts("");

    return 0;
}
