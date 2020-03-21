#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}; puts("");

        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        sort(b.begin(), b.end());
        for(long p = 0; p < n; p++){printf("%ld ", b[p]);}; puts("");
    }

    return 0;
}
