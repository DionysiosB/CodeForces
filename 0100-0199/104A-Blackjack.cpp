#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    
    const int queenOfSpades = 10;
    const int upperBound = 25;
    int ways[upperBound + 1] = {0};
    for(int k = queenOfSpades + 1; k <= queenOfSpades + 11; k++){ways[k] = 4;}
    ways[2 * queenOfSpades] = 15;
    printf("%d\n", ways[n]);

    return 0;
}
