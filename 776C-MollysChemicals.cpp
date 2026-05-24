#include <cstdio>
#include <iostream>
#include <vector>
#include <map>

int64_t countSums(const std::vector<int64_t> &cs, int64_t target){

    int64_t count(0);
    std::map<int64_t, int64_t> m;
    for(long p = cs.size() - 1; p >= 0; p--){
        int64_t seek = cs[p] + target;
        if(m.count(seek) > 0){count += m[seek];}
        if(m.count(cs[p]) <= 0){m[cs[p]] = 0;}
        ++m[cs[p]];
    }

    return count;
}


int main(){

    const int64_t maxTarget = 51; // log(10^5 * 2 * 10^9 + 1);
    int64_t n, k; scanf("%lld %lld\n", &n, &k);
    std::vector<int64_t> a(n); for(int64_t p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<int64_t> cs(n + 1, 0); for(long p = 1; p <= n; p++){cs[p] = cs[p - 1] + a[p - 1];}

    double kp(1); int64_t total(0);
    for(int64_t p = 1; p < maxTarget; p++){
        total += countSums(cs, kp);
        kp *= k;
        if(kp == 1){break;}
    }

    printf("%lld\n", total);

    return 0;
}
