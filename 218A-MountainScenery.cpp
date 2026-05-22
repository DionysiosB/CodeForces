#include <cstdio>

int main(){

    int n(0), k(0); scanf("%d %d\n", &n, &k);
    int *line = new int[2 * n + 1];
    for(int u = 0; u < 2*n + 1; u++){scanf("%d", line + u);}

    for(int u = 0; u < 2 * n + 1; u++){
        if(u % 2 == 0){printf("%d ", line[u]);}
        else{
            int offset(0);
            if(k > 0 && line[u] > line[u - 1] + 1 && line[u] > line[u + 1] + 1){offset = 1; --k;}
            printf("%d ", line[u] - offset);
        }
    }
    printf("\n");
    return 0;
}
