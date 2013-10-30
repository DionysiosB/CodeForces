#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int numCoins; scanf("%d\n",&numCoins);  int *coins = new int[numCoins];
    long total = 0, outputCoins = 0, outputValue = 0;
    for(int k = 0; k < numCoins; k++){scanf("%d", coins + k); total += coins[k];}
    sort(coins, coins + numCoins);
    while(outputValue <= total / 2){++outputCoins; outputValue += coins[numCoins - outputCoins];}
    printf("%ld\n",outputCoins);
    return 0;
}
