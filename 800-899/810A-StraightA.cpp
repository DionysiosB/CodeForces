#include <cstdio>

int main(){

    int n, k; scanf("%d %d", &n, &k);
    double s(0);
    for(int p = 0; p < n; p++){int x; scanf("%d", &x); s += x;}
    double da = 2 * (n * (k - 0.5) - s);
    long a = (da > 0) ? da : 0;
    if(a < da){++a;}
    printf("%ld\n", a);

    return 0;
}
