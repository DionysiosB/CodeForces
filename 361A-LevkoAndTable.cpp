#include <cstdio>

int main(){

    int n(0), k(0); scanf("%d %d\n", &n, &k);
    int *numbers = new int[n];
    int samePart = k / n;
    for(int p = 0; p < n; p++){numbers[p] = samePart;}
    numbers[0] += k % n;

    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            printf("%d ", numbers[(row + col) % n]);
        }
        printf("\n");
    }

    return 0;
}
