#include <cstdio>
#include <vector>

int main(){

    int n(0); scanf("%d\n", &n);
    std::vector<int> matrix(n,0);

    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            int temp(0); scanf("%d", &temp);
            if(row == col){matrix[row] = temp;}
        }
        scanf("\n");
    }

    long q(0); scanf("%ld\n", &q);

    while(q--){

        int action(0); scanf("%d", &action);
        if(action == 1 || action == 2){
            int flip(0); scanf("%d\n", &flip);
            matrix[flip - 1] = !matrix[flip - 1];
        }
        else if(action == 3){
            int output = 0; for(int d = 0; d < n; d++){output += matrix[d];}
            printf("%d", output % 2);
            scanf("\n");
        }
    }

    puts("");

    return 0;
}
