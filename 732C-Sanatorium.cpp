#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    const int n = 3;
    std::vector<long long> a(n, 0);
    for(int p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());
    long long m1 = a[2] - 1 - a[0];
    long long m2 = a[2] - 1 - a[1];
    long long ans = (m1 > 0) * m1 + (m2 > 0) * m2;
    printf("%lld\n", ans);

    return 0;
}
