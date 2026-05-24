#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    int n, m; std::cin >> n >> m;
    std::vector<int> a(n + 1, 0);
    for(int p = 1; p <= n; p++){std::cin >> a[p];}

    std::vector<long> cs(n + 1, 0);
    for(int p = 1; p <= n; p++){cs[p] = cs[p - 1] + a[p];}

    long total(0);
    while(m--){
        int u, v; std::cin >> u >> v;
        long temp = cs[v] - cs[u - 1];
        if(temp > 0){total += temp;}
    }

    std::cout << total << std::endl;

    return 0;
}
