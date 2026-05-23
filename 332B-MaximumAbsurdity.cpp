#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long n(0), k(0); scanf("%ld %ld\n", &n, &k);

    std::vector<long> data(n, 0);
    for(int p = 0; p < n; p++){scanf("%ld", &data[p]);} 

    std::vector<long long> partialSum(n - k + 1, 0);

    partialSum[0] = 0; 
    for(int p = 0; p < k; p++){partialSum[0] += data[p];}
    for(int p = 1; p <= n - k; p++){partialSum[p] = partialSum[p - 1] - data[p - 1] + data[p + k - 1];}

    
    std::vector< std::pair<long long, long> > maxSumToRight(n - k + 1, std::make_pair(0,0));
    maxSumToRight[n - k] = std::pair<long long, long> (partialSum[n - k], n - k);
    for(int p = n - k - 1; p >= 0; p--){
        if(partialSum[p] >= maxSumToRight[p + 1].first){maxSumToRight[p] = std::pair<long long, long>(partialSum[p], p);}
        else{maxSumToRight[p] = maxSumToRight[p + 1];}
    }


    long long total(0), startA(0), startB(0);
    for(long p = 0; p <= n - 2 * k; p++){
        long long test = partialSum[p] + maxSumToRight[p + k].first;
        if(test > total){startA = p; startB = maxSumToRight[p + k].second; total = test;}
    }

    printf("%lld %lld\n", startA + 1, startB + 1);

    return 0;
}
