#include <cstdio>
#include <vector>
#include <algorithm>

int main(){


    long t; scanf("%ld", &t);
    while(t--){
        long n, l, r, k; scanf("%ld %ld %ld %ld", &n, &l, &r, &k);
        std::vector<long> v;
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(a < l || a > r){continue;}
            v.push_back(a);
        }

        sort(v.begin(), v.end());
        long cnt(0);
        for(long p = 0; p < v.size(); p++){
            if(v[p] > k){break;}
            k -= v[p]; ++cnt;
        }

        printf("%ld\n", cnt);
    }

}
