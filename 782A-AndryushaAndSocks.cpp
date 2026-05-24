#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<bool> a(n + 1);
    long count(0), maxCount(0);
    for(long p = 0; p < 2 * n; p++){
        long x; scanf("%ld", &x);
        count += (a[x] ? (-1) : 1);
        maxCount = (maxCount > count) ? maxCount : count;
        a[x] = 1;
    }

    printf("%ld\n", maxCount);

    return 0;
}
