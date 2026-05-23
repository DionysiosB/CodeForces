#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n, k; scanf("%d %d\n", &n, &k);
    std::vector<int> floorVec(n);
    for(int p = 0; p < n; p++){scanf("%d", &floorVec[p]);}
    sort(floorVec.begin(), floorVec.end());
    long total(0);
    for(int p = n - 1; p >= 0; p -= k){total += 2 * (floorVec[p] - 1);}
    printf("%ld\n", total);

    return 0;
}
