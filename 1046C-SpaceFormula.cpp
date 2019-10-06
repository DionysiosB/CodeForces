#include <cstdio>
#include <vector>
#include <algorithm>

int main(){
    
    long n, d; scanf("%ld %ld", &n, &d);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
    sort(b.rbegin(), b.rend());
    long score = a[d - 1] + b[0];
    long idx(0), ans(d);
    for(long p = d - 2; p >= 0; p--){
        ++idx;
        while(idx < n && a[p] + b[idx] > score){++idx;}
        if(idx >= n || a[p] + b[idx] > score){break;}
        ans = p + 1;
    }
    
    printf("%ld\n", ans);
    
    return 0;
}
