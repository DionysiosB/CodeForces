#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<bool> good(n, 1);

    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            int temp; scanf("%d", &temp);
            if(temp == 1 || temp == 3){good[row] = 0;}
        }
        scanf("\n");
    }

    int total(0);
    for(int p = 0; p < n; p++){if(good[p]){++total;}}
    printf("%d\n", total);

    for(int p = 0; p < n; p++){if(good[p]){printf("%d ", p + 1);}}
    puts("");


    return 0;
}
