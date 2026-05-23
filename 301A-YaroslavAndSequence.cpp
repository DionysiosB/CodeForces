#include <cstdio>

int main(){

    int n; scanf("%d\n", &n);
    int negCount(0), minNegAbs(1001);
    long sum;

    for(int p = 0; p < 2 * n - 1; p++){
        int temp; scanf("%d", &temp);
        if(temp < 0){++negCount; temp = -temp;}
        sum += temp;
        if(temp < minNegAbs){minNegAbs = temp;}
    }

    if((negCount % 2) && !(n % 2)){sum -= 2 * minNegAbs;}
    printf("%ld\n", sum);

    return 0;
}
