#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> first(n + 2, 0), last(n + 2, 0);
    for(long p = 1; p <= k; p++){
        long x; scanf("%ld", &x);
        if(first[x] == 0){first[x] = p;}
        last[x] = p;
    }

    long cnt(0);
    for(long p = 1; p <= n; p++){
        if(last[p] == 0){++cnt;}
        if(p > 1 && (first[p] == 0 || last[p - 1] < first[p])){++cnt;}
        if(p < n && (first[p] == 0 || last[p + 1] < first[p])){++cnt;}
    }

    printf("%ld\n", cnt);

    return 0;
}
