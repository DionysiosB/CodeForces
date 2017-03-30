#include <cstdio>

int main(){

    int n, m; scanf("%d %d\n", &n, &m);
    long total(0);
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            int a, b; scanf("%d %d", &a, &b);
            if(a || b){++total;}
        }
    }

    printf("%ld\n", total);

    return 0;
}
