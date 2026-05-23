#include <cstdio>
#include <vector>

int main(){

    int n, b; scanf("%d %d\n", &n, &b);
    std::vector<int> price(n);
    for(int p = 0; p < n; p++){scanf("%d\n", &price[p]);}

    int ans(b);
    for(int u = 0; u < n; u++){
        for(int v = u + 1; v < n; v++){
            int candidate = b - (b / price[u]) * price[u] + (b / price[u]) * price[v];
            if(candidate > ans){ans = candidate;}
        }
    }

    printf("%d\n", ans);

    return 0;
}
