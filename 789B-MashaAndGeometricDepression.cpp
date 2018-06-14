#include <cstdio>
#include <cmath>
#include <set>

int main() {

    const int MAX_COUNT = 50;
    int64_t b, q, l, m; scanf("%lld %lld %lld %lld", &b, &q, &l, &m);

    std::set<int64_t> a;
    for(long p = 0; p < m; p++) {int64_t x; scanf("%lld", &x); a.insert(x);}

    long ans = 0, cnt = 0;
    int64_t term = b;
    while(std::fabs(term) <= l && (cnt < MAX_COUNT)) {
        if(!a.count(term)){ans++;}
        term *= q;
        ++cnt;
    }

    if((cnt == MAX_COUNT) && ans > 10){puts("inf");}
    else{printf("%ld\n", ans);}

    return 0;
}
