#include <cstdio>

int main(){
    int n(0), m(0); scanf("%d %d", &n, &m);
    printf("%d\n", n + m - 1);
    for(int k = 1; k <= m; k++){printf("1 %d\n", k);} 
    for(int k = 2; k <= n; k++){printf("%d 1\n", k);} 
    return 0;
}
