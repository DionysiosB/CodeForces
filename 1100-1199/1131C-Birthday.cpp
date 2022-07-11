#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    for(long p = 0; p < n; p += 2){printf("%ld ", a[p]);}
    for(long p = n - 1 - n % 2; p >= 1; p -= 2){printf("%ld ", a[p]);}
    puts("");

    return 0;
}
