#include <cstdio>
#include <vector>

int main(){

    int n, m; scanf("%d %d", &n, &m);
    std::vector<long> energyVec(n + 1);
    for(int p = 1; p <= n; p++){scanf("%ld", &energyVec[p]);}

    long total(0);
    for(int p = 0; p < m; p++){
        int a, b; scanf("%d %d", &a, &b);
        total += (energyVec[a] < energyVec[b]) ? energyVec[a] : energyVec[b];
    }

    printf("%ld\n", total);

    return 0;
}
