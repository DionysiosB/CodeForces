#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    if(n <= 2){printf("-1\n");}
    else{printf("3 2 ");for(int k = 0;k < n-2; k++){printf("1 ");};printf("\n");}
    return 0;
}
