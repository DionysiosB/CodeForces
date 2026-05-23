#include <cstdio>

int main(){

    int n; scanf("%d\n", &n);

    for(int row = 0; row < n; row++){
        int sym = (row < n - 1 - row) ? row : (n - 1 - row);
        for(int p = 0; p < (n - 1) / 2 - sym; p++){printf("*");}
        for(int p = 0; p < 2 * sym + 1; p++){printf("D");}
        for(int p = 0; p < (n - 1) / 2 - sym; p++){printf("*");}
        puts("");
    }

    return 0;
}
