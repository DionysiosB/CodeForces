#include <cstdio>
#include <vector>

int main(){

    long N = 100;
    long n; scanf("%ld\n", &n);

    std::vector<long> upper(n - 1, 0);
    for(long p = 0; p < n - 1; p++){scanf("%ld", &upper[p]);}
    std::vector<long> lower(n - 1, 0);
    for(long p = 0; p < n - 1; p++){scanf("%ld", &lower[p]);}
    std::vector<long> ave(n, 0);
    for(long p = 0; p < n; p++){scanf("%ld", &ave[p]);}

    std::vector<long> upperSum(n, 0);
    std::vector<long> lowerSum(n, 0);
    for(long p = 1; p < n; p++){upperSum[p] = upperSum[p - 1] + upper[p - 1];}
    for(long p = n - 2; p >= 0; p--){lowerSum[p] = lowerSum[p + 1] + lower[p];}

    long best(N * N);
    long secondBest(N * N);
    for(long p = 0; p < n; p++){
        long prop = upperSum[p] + ave[p] + lowerSum[p];
        if(prop <= best){secondBest = best; best = prop;}
        else if(prop < secondBest){secondBest = prop;}
    }

    printf("%ld\n", best + secondBest);


    return 0;
}
