#include <cstdio>

int main(){

    const int N = 8;
    bool array[N][N] = {0};

    char temp;
    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            scanf("%c", &temp); if(temp == 'B'){array[row][col] = 1;}
        }
        scanf("\n");
    }

    int total(2 * N);
    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            if(!array[row][col]){--total; break;}
        }
    }

    for(int col = 0; col < N; col++){
        for(int row = 0; row < N; row++){
            if(!array[row][col]){--total; break;}
        }
    }

    if(total == 2 * N){total = N;}
    printf("%d\n", total);

    return 0;
}
