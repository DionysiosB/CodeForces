#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long long ls(0), rs(0);
        for(long p = 0; p <= (n - 1) / 2; p++){ls += a[p];}
        for(long p = 1 + n / 2; p < n; p++){rs += a[p];}
        printf("%ld %ld\n", ls, rs);
        puts(ls < rs ? "YES" : "NO");
    }

}
