#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n; scanf("%d\n", &n);
    int pos(0), neg(0);
    long total(0);
    std::vector<std::pair<long, long> > apples(n);
    for(int p = 0; p < n; p++){
        long x, a; scanf("%ld %ld\n", &x, &a);
        apples[p] = std::pair<long, long>(x, a);
        if(x > 0){++pos;} else{++neg;};
        total += a;
    }

    sort(apples.begin(), apples.end());
    if(pos < neg - 1){for(int p = 0; p < (neg - 1 - pos); p++){total -= apples[p].second;}}
    else if(neg < pos - 1){for(int p = 0; p < (pos - 1 - neg); p++){total -= apples[n - 1 - p].second;}}

    printf("%ld\n", total);


    return 0;
}
