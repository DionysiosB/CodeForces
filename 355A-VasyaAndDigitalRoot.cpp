#include <cstdio>

int main(){
    int k(0), d(0); scanf("%d %d", &k, &d);
    if(k == 0 || (d == 0 && k > 1)){puts("No solution");}
    else{printf("%c", '0' + d); for(int m = 1; m < k; m++){printf("0");}; printf("\n");}
    return 0;
}
