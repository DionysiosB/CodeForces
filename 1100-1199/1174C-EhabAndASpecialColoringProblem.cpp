#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1, 0);
    long cur(1);
    for(long p = 2; p * p <= n; p++){
        if(a[p]){continue;}
        a[p] = cur++;
        for(long q = 2 * p; q <= n; q += p){a[q] = (a[q] ? a[q] : a[p]);}
    }

    for(long p = 2; p <= n; p++){printf("%ld ", a[p] ? a[p] : (cur++));}

    return 0;
}
