#include <cstdio>

int main(){

    int n(0), c(0); scanf("%d %d", &n, &c);
    int *price = new int[n];
    for(int k = 0; k < n; k++){scanf("%d", price + k);}

    int maxDecrease(0); 
    for(int k = 1; k < n; k++){if(price[k - 1] - price[k] > maxDecrease){maxDecrease = price[k - 1] - price[k];}}

    if(maxDecrease > c){printf("%d\n", maxDecrease - c);}
    else{puts("0");}

    return 0;
}
