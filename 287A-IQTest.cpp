#include<cstdio>

int main(){
    const int N = 4;
    int paper[N][N] = {0};
    char temp;
    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            scanf("%c",&temp);
            if(temp == '.'){paper[row][col] = 1;}
        }
        scanf("\n");
    }

    bool possible = 0;
    for(int row = 0; row < N - 1; row++){
        for(int col = 0; col < N - 1; col++){
            int sum = paper[row][col] + paper[row + 1][col + 1] + paper[row + 1][col] + paper[row][col + 1]; 
            if(sum != 2){possible = 1;break;}
        }
    }

    possible ? printf("YES\n"): printf("NO\n");
    return 0;
}
