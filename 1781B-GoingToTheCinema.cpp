#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long cnt(0);
        for(long p = 0; p <= n; p++){cnt += ( (p == 0 || a[p - 1] < p) && (p == n || a[p] > p));}
        printf("%ld\n", cnt);
    }

}
