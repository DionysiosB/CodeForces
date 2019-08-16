#include <cstdio>

int main() {
    int n, k, a, b, c, d; scanf("%d%d%d%d%d%d", &n, &k, &a, &b, &c, &d);

    if(k <= n || n <= 4) {puts("-1"); return 0;}

    printf("%d %d ", a, c);
    for(int p = 1; p <= n; p++){if(p != a && p != b && p != c && p != d){printf("%d ", p);}}
    printf("%d %d\n", d, b);

    printf("%d %d ", c, a);
    for(int p = 1; p <= n; p++){if(p != a && p != b && p != c && p != d){printf("%d ", p);}}
    printf("%d %d\n", b, d);

    return 0;
}
