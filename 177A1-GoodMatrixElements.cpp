#include <cstdio>

int main(){

    int n(0); scanf("%d\n", &n);
    
    long total(0);
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            int temp(0); scanf("%d", &temp);
            if((row == col) || (row == n - 1 - col) || row == (n - 1)/2 || col == (n - 1)/2){total += temp;}
        }
        scanf("\n");
    }

    printf("%ld\n", total);
    return 0;
}
