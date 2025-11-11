#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        bool ans(true);
        for(long p = 2; ans && p < n; p += 2){if(a[p - 1] != a[p]){ans = false;}}
        puts(ans ? "YES" : "NO");
    }

}
