#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> costVec(n, 0);
    for(int k = 0; k < n; k++){scanf("%ld ", &costVec[k]);}

    std::vector<long long> cumCostVec(n + 1, 0);
    long long total(0);
    for(int k = 0; k < n; k++){total += costVec[k]; cumCostVec[k + 1] = total;}

    sort(costVec.begin(), costVec.end());

    std::vector<long long> cumSortedCostVec(n + 1, 0);
    total = 0;
    for(int k = 0; k < n; k++){total += costVec[k]; cumSortedCostVec[k + 1] = total;}


    long m; scanf("%ld\n", &m);
    for(int k = 0; k < m; k++){
        long type, start, end; scanf("%ld %ld %ld", &type, &start, &end);
        if(type == 1){printf("%lld\n", cumCostVec[end] - cumCostVec[start - 1]);}
        else if(type == 2){printf("%lld\n", cumSortedCostVec[end] - cumSortedCostVec[start - 1]);}
    }

    return 0;
}
