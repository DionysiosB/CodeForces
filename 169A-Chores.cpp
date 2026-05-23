#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, a, b; scanf("%ld %ld %ld\n", &n, &a, &b);

    std::vector<long> compVec(n, 0);
    for(int k = 0; k < n; k++){scanf("%ld ", &compVec[k]);}
    sort(compVec.begin(), compVec.end());

    printf("%ld\n", compVec[b] - compVec[b - 1]);

    return 0;
}
