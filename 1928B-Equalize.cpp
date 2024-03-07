#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v; std::set<long> s;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(s.count(x)){continue;}
            v.push_back(x); s.insert(x);
        }

        sort(v.begin(), v.end());
        //for(long p = 0; p < v.size(); p++){printf("* %ld\n", v[p]);}

        long idx(0); long ans(0);
        for(long p = 0; p < v.size(); p++){
            while(idx + 1 < v.size() && v[idx + 1] < v[p] + n){++idx;}
            long len = idx - p + 1;
            ans = (ans > len) ? ans : len;
            if(idx + 1 == v.size()){break;}
        }

        printf("%ld\n", ans);
    }

}
