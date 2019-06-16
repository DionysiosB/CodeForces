#include <cstdio>
#include <vector>

int main(){

    const long N = 107;
    long n; scanf("%ld", &n);
    std::vector<long> cv(N, 0);

    long cnt(0);
    for(long p = 0; p < n; p++){
        long a; scanf("%ld", &a); ++cv[a];
        cnt = (cnt > cv[a]) ? cnt : cv[a];
    }

    printf("%ld\n", cnt);

    return 0;
}
