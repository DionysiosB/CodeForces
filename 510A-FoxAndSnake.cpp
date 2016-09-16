#include <cstdio>

int main(){

    int n, m; scanf("%d %d\n", &n, &m);

    for(int p = 0; p < n; p++){
        if(p % 2 == 0){for(int k = 0; k < m; k++){printf("#");}; puts("");}
        else if(p % 4 == 1){for(int k = 0; k < m - 1; k++){printf(".");}; puts("#");} 
        else if(p % 4 == 3){printf("#"); for(int k = 0; k < m - 1; k++){printf(".");}; puts("");} 
    }

    return 0;
}
