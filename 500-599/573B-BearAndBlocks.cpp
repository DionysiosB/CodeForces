#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> blocks(n + 2);
    for(long p = 1; p <= n; p++){scanf("%ld", &blocks[p]);}
    for(long p = 1; p <= n; p++){blocks[p] = std::min(blocks[p], 1 + blocks[p - 1]);}
    for(long p = n; p >= 0; p--){blocks[p] = std::min(blocks[p], 1 + blocks[p + 1]);}
    long final(0);
    for(long p = 1; p <= n; p++){final = std::max(final, blocks[p]);}
    printf("%ld\n", final);

    return 0;
}
