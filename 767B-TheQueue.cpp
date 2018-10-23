#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){
    
    int64_t ts, tf, t; scanf("%lld %lld %lld", &ts, &tf, &t);
    int64_t n; scanf("%lld", &n);
    
    int64_t m(1e18), ans(1e18);
    while(n--){
        int64_t a; scanf("%lld", &a);
        if(a > 0 && a <= tf - t){
            int64_t prev = (ts > (a - 1)) ? ts : (a - 1);
            if(prev <= tf - t && ts - a + 1 < m){m = ts - a + 1; ans = (a - 1) < ts ? (a - 1) : ts;}
            ts = ((ts > a) ? ts : a) + t;
        }
    }
    
    if(ts <= tf - t){ans = ts;}
    printf("%lld\n", ans);
    
    return 0;
}
