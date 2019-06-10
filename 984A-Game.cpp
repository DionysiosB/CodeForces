#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    printf("%ld\n", a[(n - 1)/2]);

    return 0;
}
