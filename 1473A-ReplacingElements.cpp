#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, d; scanf("%ld %ld", &n, &d);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        bool res = (a.back() <= d) || (a[0] + a[1] <= d);
        puts(res ? "YES" : "NO");
    }

}
