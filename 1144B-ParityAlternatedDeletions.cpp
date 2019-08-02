#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    long odds(0);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]); odds += a[p] % 2;}
    sort(a.rbegin(), a.rend());
    long evens = n - odds;
    int parity = (odds > evens);
    long m = (odds > evens) ? (odds - evens) : (evens - odds);
    if(m == n){--m;}

    long long sum(0);
    for(long p = 0; p < m; p++){
        if(a[p] % 2 != parity){continue;}
        sum += a[p];
    }

    printf("%lld\n", sum);

    return 0;
}
