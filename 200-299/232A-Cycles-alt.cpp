#include <iostream>
#include <vector>


int main(){

    int a[101][101] = {0}; 
    int cycles; scanf("%d", &cycles);
    int n(2), i(0);

    while(cycles > 0) {
        if(cycles < i){i = 0; n++;}
        a[n - 1][i] = a[i][n - 1] = 1;
        cycles -= i; i++;
        if((i >= n - 1) && (cycles > 0)){i = 0; n++;}
    }

    printf("%d\n", n);
    for (int row = 0; row < n; row++) {for (int col = 0; col < n; col++){printf("%d", a[row][col]);}; puts("");}

    return 0;
}
