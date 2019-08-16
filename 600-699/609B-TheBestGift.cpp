#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<long> count(m, 0);
    for(long p = 0; p < n; p++){long genre; scanf("%ld", &genre); ++count[--genre];}

    long long total(0);
    for(long p = 0; p < m; p++){
        for(long q = p + 1; q < m; q++){
            total += count[p] * count[q];
        }
    }

    printf("%lld\n", total);

    return 0;
}
