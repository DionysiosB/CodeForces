#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long cnt(1);
        for(long p = n - 1; p >= 0; p--){if(a[p] <= p + 1){cnt = p + 2; break;}}
        printf("%ld\n", cnt);
    }

    return 0;
}
