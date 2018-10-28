#include <cstdio>

int main(){

    int n(0), m(0); scanf("%d %d", &n, &m);
    int temp(0);
    bool edge(0);
    for(int row = 0; row < n; row++){
        if(edge){break;}
        for(int col = 0; col < m; col++){
            scanf("%d", &temp);
            if(temp == 1 && (row == 0 || col == 0 || row == n - 1 || col == m - 1)){edge = 1; break;}
        }
    }

    if(edge){puts("2");}
    else{puts("4");}

    return 0;
}
