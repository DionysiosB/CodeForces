#include <cstdio>

int main(){

    const int N = 4;
    int l[N], s[N], r[N], p[N];
    bool possible(0);
    for(int u = 0; u < N; u++){scanf("%d %d %d %d", &l[u], &s[u], &r[u], &p[u]);}
    for(int u = 0; u < N; u++){possible |= p[u] & (l[u] | s[u] | r[u] | s[(u + 2) % N] | l[(u + 1) % N] | r[(N + u - 1) % N]);}

    puts(possible ? "YES" : "NO");

    return 0;
}
