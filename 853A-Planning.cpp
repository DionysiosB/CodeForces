#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

int main(){

    int64_t n, k; scanf("%lld %lld", &n, &k);
    std::vector<int64_t> c(n);
    for(int64_t p = 0; p < n; p++){scanf("%lld", &c[p]);}

    std::set<std::pair<int64_t, int64_t> > s;
    std::vector<int64_t> d(n, 0);
    int64_t rate(0);
    int64_t total(0);
    for(int64_t p = 0; p < n + k; p++){
        total += rate;
        if(p < n){s.insert(std::make_pair(c[p], p)); rate += c[p];}
        if(p >= k){
            std::pair<int64_t, int64_t> f = *(--(s.end()));
            rate -= f.first;
            d[f.second] = p;
            s.erase(--(s.end()));
        }
    }

    printf("%lld\n", total);
    for(int64_t p = 0; p < n; p++){printf("%lld ", 1 + d[p]);}
    puts("");

    return 0;
}
