#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());

        bool res(true);
        for(long p = 1; p < n; p++){if(a[p - 1] + 1 < a[p]){res = false; break;}}
        puts(res ? "YES" : "NO");
    }

    return 0;
}
