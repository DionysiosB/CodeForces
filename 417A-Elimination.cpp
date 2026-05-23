#include <cstdio>

int main(){

    int c, d, n, m, k; scanf("%d %d %d %d %d", &c, &d, &n, &m, &k);
    int u = (n * m > k) ? (n * m - k) : 0;
    int x = (u + n - 1) / n * c;
    int y = u / n * c + u % n * d;
    int z = (x < y) ? x : y;
    int res = (c < n * d) ? z : (u * d);

    printf("%d\n", res);

    return 0;
}
