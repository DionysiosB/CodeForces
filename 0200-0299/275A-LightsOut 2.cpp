#include <cstdio>

int main(){
    const int dim = 3;
    int state[dim][dim] = {0};
    int temp = 0;
    for(int row = 0; row < dim; row++){
        for(int col = 0; col < dim; col++){
            scanf("%d", &temp);
            state[row][col] += temp;
            if(row > 0){state[row - 1][col] += temp;}
            if(col > 0){state[row][col - 1] += temp;}
            if(row < dim - 1){state[row + 1][col] += temp;}
            if(col < dim - 1){state[row][col + 1] += temp;}
        }
    }
    for(int row = 0; row < dim; row++){
        for(int col = 0; col < dim; col++){
            printf("%d", (1 + state[row][col])%2);
        }
        printf("\n");
    }
    return 0;
}
