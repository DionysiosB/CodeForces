#include <cstdio>

int main(){

    int a1, a2, a3; scanf("%d %d %d\n", &a1, &a2, &a3);
    int b1, b2, b3; scanf("%d %d %d\n", &b1, &b2, &b3);

    int n; scanf("%d\n", &n);

    
    int a = ((a1 + a2 + a3) / 5)  + ((a1 + a2 + a3) % 5 > 0);
    int b = ((b1 + b2 + b3) / 10) + ((b1 + b2 + b3) % 10 > 0);

    puts((a + b) <= n ? "YES" : "NO");

    return 0;
}
