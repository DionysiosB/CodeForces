#include <cstdio>
#include <iostream>


int main(){

    int n(0); scanf("%d", &n);
    long output(0);

    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            int temp; scanf("%d", &temp);
            if(row == col){output += temp;}
            else if(row + col == n - 1){output += temp;}
            else if(2 * row == n - 1){output += temp;}
            else if(2 * col == n - 1){output += temp;}
        }
        scanf("\n");
    }

    printf("%ld\n", output);

    return 0;
}
