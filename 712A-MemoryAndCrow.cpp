#include <cstdio>
#include <vector>

int main(){

    long long n; scanf("%lld\n", &n);
    std::vector<long long> a(n);
    for(long long p = 0; p < n; p++){scanf("%lld", &a[p]);}

    std::vector<long long> b(n);
    b[n - 1] = a[n - 1];
    for(long long p = n - 2; p >= 0; p--){b[p] = a[p] + a[p + 1];}

    for(long long p = 0; p < n; p++){printf("%lld ", b[p]);}
    puts("");

    return 0;
}
