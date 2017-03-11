#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    int m = n / k;

    std::vector<long> count(k, 0);
    for(long p = 0; p < n; p++){
        long color; scanf("%ld", &color);
        ++count[color - 1];
    }

    long total(0);
    for(long p = 0; p < k; p++){
        long diff = m - count[p];
        if(diff < 0){diff = -diff;}
        total += diff;
    }

    printf("%ld\n", total / 2);

    return 0;
}
