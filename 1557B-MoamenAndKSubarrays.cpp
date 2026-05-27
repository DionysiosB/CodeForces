#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p].first); v[p].second = p;}
        sort(v.begin(), v.end());
        long cnt(1); for(long p = 1; p < n; p++){cnt += (v[p].second != 1 + v[p - 1].second);}
        puts(cnt <= k ? "YES" : "NO");
    }

}
