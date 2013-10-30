#include <cstdio>

int main(){
    int n;scanf("%d", &n);
    int *a = new int[n + 1];
    for(int k = 1; k <= n; k++){scanf("%d", a + k);}
    int m; scanf("%d", &m);
    int wire = 0, order = 0;
    while(m--){
        scanf("%d %d", &wire, &order);
        if(wire > 1){a[wire - 1] += (order - 1);}
        if(wire < n){a[wire + 1] += (a[wire] - order);}
        a[wire] = 0;
    }
    for(int k = 1; k <=n; k++){printf("%d\n", a[k]);}
    return 0;
}
