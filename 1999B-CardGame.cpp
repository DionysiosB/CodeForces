#include <cstdio>

int f(int x, int y){return (x > y) - (x < y);}

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int a, b, c, d; scanf("%d %d %d %d", &a, &b, &c, &d);
        int res = 2 * (f(a, c) + f(b, d) > 0) + 2 * (f(a, d) + f(b, c) > 0);
        printf("%d\n", res);
    }

}
