#include <cstdio>

int main(){

    int n; scanf("%d", &n);
    for(int s = 0; s < n; s++){
        for(int k = 0; k < n; k++){printf("%d ", n * k + (k + s)% n + 1);}
        printf("\n"); //Write all numbers in a square, and pick one of each row and col
    }
    return 0;
}
