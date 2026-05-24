#include <cstdio>

int main(){

    int n, m; scanf("%d %d", &n, &m);
    int left(1), right(1000);
    while(m--){
        int x, f; scanf("%d %d", &x, &f);

        int l = (x / f) + (x % f > 0);
        left = (left > l) ? left : l;

        --f; --x; if(f <= 0){continue;}
        right = (right < (x / f)) ? right : (x / f);
    }

    int u = (n / left) + (n % left > 0);
    int v = (n / right) + (n % right > 0);
    printf("%d\n", (u == v) ? u : -1);

    return 0;
}
