#include <cstdio>

int main(){

    int n, k, p, x, y; scanf("%d %d %d %d %d\n", &n, &k, &p, &x, &y);

    int smallerCount(0);
    long sumLeft(x);
    for(int p = 0; p < k; p++){
        int temp; scanf("%d", &temp);
        sumLeft -= temp;
        smallerCount += (temp < y);
    }

    int smallerLeft = n / 2 - smallerCount; if(smallerLeft > n - k){smallerLeft = n - k;}
    int largerLeft = n - k - smallerLeft;
    if(smallerCount > n / 2 || sumLeft < smallerLeft + y * largerLeft){puts("-1"); return 0;}
    while(smallerLeft--){printf("1 ");}
    while(largerLeft--){printf("%d ", y);}

    return 0;
}
