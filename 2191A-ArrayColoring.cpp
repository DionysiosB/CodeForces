#include <cstdio>
#include <vector>
#include <algorithm>
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; ++p){
            scanf("%ld", &v[p].first);
            v[p].second = (p % 2);
        }
 
        bool ans(true);
        sort(v.begin(), v.end());
        for(long p = 1; p < n && ans; ++p){ans &= (v[p - 1].second != v[p].second);}
        puts(ans ? "YES" : "NO");
    }
 
}
