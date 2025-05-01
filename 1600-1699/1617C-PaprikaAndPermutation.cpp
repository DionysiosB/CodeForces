#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v; std::set<long> s;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if((x <= n) && (!s.count(x))){s.insert(x);}
            else{v.push_back(x);}
        }

        sort(v.begin(), v.end());

        long cnt(v.size()), idx(0);
        for(long p = 1; p <= n; p++){
            if(s.count(p)){continue;}
            if(v[idx] <= 2 * p){cnt = -1; break;}
            ++idx;
        }

        printf("%ld\n", cnt);
    }

}
