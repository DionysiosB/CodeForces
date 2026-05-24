#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long solved(k), count(0);
    for(long p = 0; p < n; p++){
        while(2 * solved < a[p]){++count; solved *= 2;}
        solved = (solved > a[p]) ? solved : a[p];
    }
    printf("%ld\n", count);

    return 0;
}
