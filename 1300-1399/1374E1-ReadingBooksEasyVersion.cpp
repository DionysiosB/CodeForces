#include <cstdio>
#include <vector>
#include <algorithm>
 
int main(){
 
    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a, b, d;
    for(long p = 0; p < n; p++){
        long t, x, y; scanf("%ld %ld %ld", &t, &x, &y);
        if(x && y){d.push_back(t);}
        else if(x){a.push_back(t);}
        else if(y){b.push_back(t);}
    }
 
    if((a.size() + d.size() < k) || (b.size() + d.size() < k)){puts("-1"); return 0;}

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(d.begin(), d.end());

    for(long p = 1; p < a.size(); p++){a[p] += a[p - 1];}
    for(long p = 1; p < b.size(); p++){b[p] += b[p - 1];}
    for(long p = 1; p < d.size(); p++){d[p] += d[p - 1];}
    long mt(2e9 + 7);
    for(long p = 0; p <= d.size() && p <= k; p++){
        long time = (p > 0) ? d[p - 1] : 0;
        long idv = k - p;
        if(a.size() >= idv && b.size() >= idv){
            time += (idv > 0) ? (a[idv - 1] + b[idv - 1]) : 0;
            mt = (mt < time) ? mt : time;
        }

    }
 
    printf("%ld\n", mt);
    
    return 0;
}
