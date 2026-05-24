#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1, 0);
    std::vector<bool> visited(n + 1, 0);

    for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}

    long b(0);
    for(long p = 1; p <= n; p++){int x; scanf("%d", &x); b += x;}

    long cycles(0);
    for(long p = 1; p <= n; p++){
        if(visited[p]){continue;}
        ++cycles;
        long u = p;
        while(!visited[u]){visited[u] = 1; u = a[u];}
    }

    long count = ((cycles > 1) ? cycles : 0) + (b % 2 == 0);
    printf("%ld\n", count);

    return 0;
}
