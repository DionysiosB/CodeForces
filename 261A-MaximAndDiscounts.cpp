#include <cstdio>
#include <algorithm>

int main(){

    long m; scanf("%ld", &m);
    long bestDiscount(100001), temp(0);
    for(long k = 0; k < m; k++){scanf("%ld", &temp); if(temp < bestDiscount){bestDiscount = temp;}}

    long n; scanf("%ld", &n);
    long *prices = new long[n];
    for(long k = 0; k < n; k++){scanf("%ld", prices + k);}

    std::sort(prices, prices + n);

    long itemsPaid(0), totalPaid(0);
    while(n > 0){
        totalPaid += prices[--n];
        ++itemsPaid;
        if(itemsPaid % bestDiscount == 0){n -= 2;}
    }

    printf("%ld\n", totalPaid);
    return 0;
}

