#include <cstdio>
#include <vector>

int main(){

    int n, m; scanf("%d %d\n", &n, &m);
    std::vector<bool> row(n, 0), col(n, 0);

    while(m--){int x, y; scanf("%d %d", &x, &y); row[x - 1] = 1; col[y - 1] = 1;}
    int count = 2 * (n - 2) - (n % 2) * (!row[n/2]) * (!col[n / 2]);
    for(int p = 1; p < n - 1; p++){count -= row[p] + col[p];}

    printf("%d\n", count);

    return 0;
}
