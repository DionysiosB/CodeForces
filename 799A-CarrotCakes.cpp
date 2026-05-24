#include <cstdio>

int main(){

    int n, t, k, d; scanf("%d %d %d %d", &n, &t, &k, &d);
    puts((d < ((n-1) / k) * t) ? "YES" : "NO");

    return 0;
}
