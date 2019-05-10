#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, d; scanf("%ld %ld", &n, &d);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long left(0), rem(n);
    for(long p = 0; p < n; p++){
        while(left <= p && a[p] - a[left] > d){++left;}
        long cur = n - (p - left + 1);
        rem = (rem < cur) ? rem : cur;
    }

    printf("%ld\n", rem);

    return 0;
}
