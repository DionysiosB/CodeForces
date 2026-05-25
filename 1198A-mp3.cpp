#include <cstdio>
#include <vector>
#include <algorithm>
 
int main(){
    
    long n, b; scanf("%ld %ld", &n, &b);
    long bits = 8 * b / n;
    bits = (bits < 21) ? bits : 21;
    long range = 1 << bits;
    
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    
    long idx(0), diff(0), chg(n + 1);
    for(long p = 0; p < n; p++){
        if(p == 0 || a[p] > a[p - 1]){++diff;}
        while(diff > range){
            ++idx;
            if(a[idx] > a[idx - 1]){--diff;}
        }
        long tmp = n - 1 - p + idx;
        chg = (chg < tmp) ? chg : tmp;
    }
    
    printf("%ld\n", chg);
    
    return 0;
}
