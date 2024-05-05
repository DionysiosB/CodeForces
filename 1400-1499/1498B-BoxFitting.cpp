#include <cstdio>
#include <vector>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, w; scanf("%ld %ld", &n, &w);
        std::map<long, long> rem;
        long res(0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++rem[x];}
        std::vector<long> v(1e5 + 7, w);
        for(long p = 30; p >= 0; p--){
            long cur(1 << p), rod(rem[cur]), idx(0);
            bool carryon = true;
            for(long idx = 0; carryon && idx < v.size(); idx++){
                long cap = v[idx] / cur;
                if(cap >= rod){cap = rod; carryon = false;}
                rod -= cap;
                v[idx] -= cap * cur;
                res = (res > idx) ? res : idx;
            }
        }

        printf("%ld\n", res + 1);
    }

}
