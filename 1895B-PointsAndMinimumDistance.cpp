#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(2 * n); for(long p = 0; p < 2 * n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long res = (a[2 * n - 1] - a[n]) + (a[n - 1] - a[0]);
        printf("%ld\n", res);
        for(long p = 0; p < n; p++){printf("%ld %ld\n", a[p], a[n + p]);}
    }

}
