#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> v;
        long cur; scanf("%ld", &cur);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            long diff = cur - x;
            diff = (diff > 0) ? diff : -diff;
            v.push_back(diff);
            cur = x;
        }

        sort(v.rbegin(), v.rend());
        long res(0); for(long p = k - 1; p < v.size(); p++){res += v[p];}
        printf("%ld\n", res);
    }

}
