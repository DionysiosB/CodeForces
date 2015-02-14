#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);
    printf("%d\n", (n * n + 1) / 2);

    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            if((row + col)%2){printf(".");}
            else{printf("C");}
        }
        printf("\n");
    }
    return 0;
}
