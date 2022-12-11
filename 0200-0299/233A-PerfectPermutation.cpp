#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    if(n % 2 == 0){for(int k = 1; k <= n ; k++){printf("%d ", k % 2 ? (k+1):(k-1));}}
    else{printf("-1");}
    printf("\n");
    return 0;
}
