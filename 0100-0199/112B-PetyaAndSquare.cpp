#include <cstdio>

int main(){
    
    int N(0), x(0), y(0); scanf("%d %d %d", &N, &x, &y);
    int n = N/2;
    if((x == n || x == n + 1) && (y == n || y == n + 1)){puts("NO");}
    else{puts("YES");}
    return 0;
}
