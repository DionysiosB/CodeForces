#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    int left(0), right(0), leftSum(0), rightSum(0);
    for(int k = 0; k < n; k++){
        scanf("%d %d", &left, &right);
        leftSum += left; rightSum += right;
    }

    int total = 0;
    total  = ((leftSum <= n/2) ? leftSum : (n - leftSum));
    total += ((rightSum <= n/2) ? rightSum : (n - rightSum));

    printf("%d\n", total);
    return 0;
}
