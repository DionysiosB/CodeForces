#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[n - 1 - p]);}
    long count(0), dead(-1);
    for(long p = 0; p < n; p++){
        count += (p > dead);
        dead = (dead > p + a[p]) ? dead : (p + a[p]);
    }

    printf("%ld\n", count);

    return 0;
}
