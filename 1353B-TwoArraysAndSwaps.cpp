#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        long s(0);
        for(long p = 0; p < n; p++){s += (p < k && b[p] > a[p]) ? b[p] : a[p];}
        printf("%ld\n", s);
    }

    return 0;
}
