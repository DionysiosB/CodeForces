#include <cstdio>
#include <algorithm>

int main(){

    int n(0), d(0); scanf("%d %d", &n, &d);
    int * cost = new int[n];
    for(int u = 0; u < n; u++){scanf("%d", cost + u);}
    std::sort(cost, cost + n);

    int m(0); scanf("%d", &m);

    int profit(0);
    for(int u = 0; u < m; u++){if(u < n){profit += cost[u];} else{profit -= d;}}

    printf("%d\n", profit);

    return 0;
}
