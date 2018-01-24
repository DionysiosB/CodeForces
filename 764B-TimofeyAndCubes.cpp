#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(long p = 0; p < n / 2; p++){if(p % 2 == 0){long u = a[p]; a[p] = a[n - 1 - p]; a[n - 1 - p] = u;}}
    for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
    puts("");

    return 0;
}
