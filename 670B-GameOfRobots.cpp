#include <cstdio>
#include <cmath>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    std::vector<long> id(n + 1);
    for(long p = 1; p <= n; p++){scanf("%ld ", &id[p]);}

    long current(0);
    while(k > 0){k -= ++current;}
    k += current;
    printf("%ld\n", id[k]);

    return 0;
}
