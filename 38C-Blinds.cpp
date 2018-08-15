#include <cstdio>
#include <vector>

int main(){

    const long M = 101;
    long n, l; scanf("%ld %ld", &n, &l);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long maxArea(0);
    for(long u = l; u < M; u++){
        long area(0);
        for(long p = 0; p < n; p++){area += u * (a[p] / u);}
        maxArea = (maxArea > area) ? maxArea : area;
    }

    printf("%ld\n", maxArea);

    return 0;
}
