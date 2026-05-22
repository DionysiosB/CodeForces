#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){

    int n, m; scanf("%d %d", &n, &m);
    int *seats = new int[m];
    for(int k = 0; k < m; k++){scanf("%d", seats + k);}

    std::sort(seats, seats + m);

    int remaining(n), minProfit(0), maxProfit(0);
    for(int k = 0; k < m; k++){
        int a = (seats[k] <= remaining) ? 0: seats[k] - remaining;
        int b = seats[k];
        minProfit += (b + a + 1)*(b - a) / 2;
        remaining -= (b - a);
        if(remaining <=0){break;}
    }

    remaining = n;
    int *lebesgue = new int[1 + seats[m-1]]; 
    for(int k = 1; k <= seats[m - 1]; k++){lebesgue[k] = 0;}
    for(int p = 0; p < m; p++){for(int q = 1; q <= seats[p]; q++){++lebesgue[q];}}
    for(int k = seats[m - 1]; k > 0; k--){
        int c = std::min(lebesgue[k], remaining);
        maxProfit += k * c;
        remaining -= c;
        if(remaining <= 0){break;}
    }

    printf("%d %d\n", maxProfit, minProfit);

    return 0;
}
