#include <cstdio>

int main(){

    int c1(0), c2(0), c3(0), c4(0); scanf("%d %d %d %d\n", &c1, &c2, &c3, &c4);
    int n(0), m(0); scanf("%d %d\n", &n, &m);

    int *bus = new int[n + 1]; int *trolley = new int[m + 1];

    for(int k = 1; k <= n; k++){scanf("%d", bus + k);} 
    for(int k = 1; k <= m; k++){scanf("%d", trolley + k);}

    long temp(0);
    for(int k = 1; k <= n; k++){temp = c1 * bus[k]; bus[k] = (c2 < temp) ? c2 : temp ;}
    for(int k = 1; k <= m; k++){temp = c1 * trolley[k]; trolley[k] = (c2 < temp) ? c2 : temp ;}

    long totalBusCost(0);     for(int k = 1; k <= n; k++){totalBusCost += bus[k];}
    long totalTrolleyCost(0); for(int k = 1; k <= m; k++){totalTrolleyCost += trolley[k];}

    if(totalBusCost > c3){totalBusCost = c3;}
    if(totalTrolleyCost > c3){totalTrolleyCost = c3;}

    long totalCost = totalBusCost + totalTrolleyCost;
    if(totalCost > c4){totalCost = c4;}

    printf("%ld\n", totalCost);
    return 0;
}
