#include <cstdio>
#include <vector>


long getThanosLength(const std::vector<long> &a, long start, long stop){

    if(stop <= start + 1){return stop - start;}
    bool sorted(true);
    for(long p = start + 1; p < stop; p++){if(a[p - 1] > a[p]){sorted = false; break;}}
    if(sorted){return (stop - start);}

    long left = getThanosLength(a, start, (start + stop) / 2);
    long right = getThanosLength(a, (start + stop) / 2, stop);
    return (left > right) ? left : right;
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long ans = getThanosLength(a, 0, n);
    printf("%ld\n", ans);

    return 0;
}
