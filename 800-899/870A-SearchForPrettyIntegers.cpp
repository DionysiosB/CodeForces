#include <cstdio>

int main(){
    
    const int N = 10;
    int n, m; scanf("%d %d", &n, &m);
    bool a[N] = {0}; bool b[N] = {0};
    int u(10), v(10);
    for(long p = 0; p < n; p++){int x; scanf("%d", &x); a[x] = 1; u = (u < x) ? u : x;}
    for(long p = 0; p < m; p++){int x; scanf("%d", &x); b[x] = 1; v = (v < x) ? v : x;}
    
    if(u > v){int x = u; u = v; v = x;}
    
    for(int p = 0; p < N; p++){if(a[p] && b[p]){printf("%d\n", p); return 0;}}
    printf("%d\n", 10 * u + v);
    
    return 0;
}
