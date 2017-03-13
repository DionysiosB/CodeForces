#include <cstdio>
#include <vector>

int main(){

    const long N = 1000050;
    std::vector<long> count(N + 1, 0);

    long n; scanf("%ld\n", &n);
    for(long p = 0; p < n; p++){
        long weight; scanf("%ld\n", &weight);
        ++count[weight];
    }

    for(long p = 0; p < N; p++){
        while(count[p] >= 2){
            long div = count[p] / 2;
            count[p] -= 2 * div;
            count[p + 1] += div;
        }
    }

    long total(0);
    for(long p = 0; p < N; p++){total += count[p];}

    printf("%ld\n", total);

    return 0;
}
