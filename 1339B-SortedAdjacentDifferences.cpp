#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long left((n - 1) / 2), right((n + 1) / 2);
        while(left >= 0 || right < n){
            if(left >= 0){printf("%ld ", a[left--]);}
            if(right < n){printf("%ld ", a[right++]);}
        }
        puts("");
    }

    return 0;
}
