#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int a, b, c; scanf("%d %d %d", &a, &b, &c);
        int x = (a < b ? a : b); x = (x < c ? x : c);
        printf("%d\n", n - x);
    }

}
